#include<iostream>
using namespace std;

int binarrysearch(int arr[],int size,int n)
{
  int start=0;
  int end=size-1;

  int mid = (start + end)/2;
   while(start <= end)
  {
    if(arr[mid]==n)
   {
    return mid;
  }

   if(n > arr[mid])
   { start = mid+1;}
   else
   {end=mid-1;}

  mid=(start + end)/2;

   }return -1;
}
int main()
{
  int even[6]={1,4,7,10,15,20};
  int odd[5]={2,5,8,9,12};

  int i,n;

   int evensearch=binarrysearch(even,6,58);
   cout<<"search in even element-->"<<evensearch<<endl;
   int oddsearch=binarrysearch(odd,5,5);
    cout<<"search in odd element-->"<<oddsearch;

 return 0;
}
