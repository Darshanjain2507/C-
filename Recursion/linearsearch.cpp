#include<iostream>
using namespace std;
void linearsearch(int arr[],int size,int k)
{
   if(arr[0]==k){
       return true;
 }
    else
    {  return remaining=linearsearch(arr+1,size-1,k);
     }


}
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int k=10;
   int ans =linearsearch(arr,10,k)


   if(ans)
   { cout<<"key found";
    }
   else
   {
   cout<<"error";
    }
}
