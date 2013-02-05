#include <iostream>
#include<string>
#include<sstream>
#include <fstream>

using namespace std;

int main()
{

        int a[10000],n=0;
        int x,i=0;
        fstream myfile;
        string line;
        myfile.open ("data10k.txt");

        while(!myfile.eof()){
                getline(myfile,line);
                stringstream(line)>>x;
                a[i]=x;
                i++;
                }


        void QuickSort(int[],int,int);


        QuickSort(a,n,9999);


        for (n=0;n<10000;n++)
                {

                cout<<a[n]<<endl;
            }
        return 0;
        }



void QuickSort(int k[10000],int lb,int ub)
{
 int i,j,key,flag=0,temp;

 if (lb<ub)
    {
     i=lb;
     j=ub+1;
     key=k[i];
     while(flag!=1)
      {
       i++;
       while(k[i]<key)
        {
         i++;
        }
       j--;
       while(k[j]>key)
        {
         j--;
        }
       if (i<j)
          {
           temp=k[i];
           k[i]=k[j];
           k[j]=temp;
          }
       else
          {
           flag=1;
           temp=k[lb];
           k[lb]=k[j];
           k[j]=temp;
          }
      }
     QuickSort(k,lb,j-1);
     QuickSort(k,j+1,ub);
    }
}
