#include<iostream>
using namespace std;
int main()
{   int r,k=0,i,v,j,n;
    int a[10]={10,20,30,40,50,60,70,80,90,100};
   cout<<"enter rotatary value-->";
   cin>>r;
   v=10-r;
    for(i=v;i<10;i++)
    {  n=a[i];
       for(j=i;j>k;j--)
         { a[j]=a[j-1];
             }
       a[k++]=n;
    }
       for(i=0;i<10;i++)
         { cout<<a[i]<<" , ";    }


}
