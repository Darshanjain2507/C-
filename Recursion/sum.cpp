#include<iostream>
using namespace std;
int getsum(int arr[],int size)
{
    int sum=0;
    if(size==0)
    {
        return false;
    }
    if(size == 1)
    {
        return arr[0];
    }
    int remain=getsum(arr+1,size-1);
    sum=arr[0]+ remain;
     return sum;
}
int main()
{
   int arr[5]={1,2,3,4,5};
    cout<<"sum of elements of array-->"<<getsum(arr,5);
}
