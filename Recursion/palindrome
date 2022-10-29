#include<iostream>
using namespace std;
int  reverse(string st,int s,int e)
{
    if(s>e)
    {
        return true;
    }
    if(st[s]!=st[e])
    {
       return false;
    }
    else
    {
        return reverse(st,s+1,e-1);
    }

}
int main()
{
 string st="abbba";
 bool ispalindrome=reverse(st,0,st.length()-1);
 if(ispalindrome)
 {
     cout<<"It is a palindrome";
 }
 else
 {
     cout<<"It is not a palindrome";
 }
}
