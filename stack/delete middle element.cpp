#include<iostream>
#incclude<stack>
using namespace std;

void solve(stack<int>&inputStack, int count ,int size){
    //base case
    
    if(count==size/2)
    {
        inputStack.pop();
        return ;
    }    
    int val=inputStack.top();
      inputStack.pop();
    
    //recusive call
    solve(inputStack,count+1,size);
    inputStack.push(val);
}


void deleteMiddle(stack<int>&inputStack, int N){
	
  int count=0;
    solve(inputStack,count,N);
   
}
