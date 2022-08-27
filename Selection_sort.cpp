#include<iostream>
using namespace std;

int main() {
 int n,j;
 cin>>n;
 int arr[5]={3,2,5,4,1};

  for(int i=0;i<n-1;i++)
  {  int minindex=i;

      for(int j=i+1;j<n;j++)
      {
          if(arr[j]<arr[minindex])
          {
              minindex=j;
          }
      }
      swap(arr[minindex],arr[i]);
  }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
