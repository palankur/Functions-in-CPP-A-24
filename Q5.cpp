//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void check(int x);
int main()
{
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    check(x);
    return 0;
}
void check(int x)
{
    int next=0,t1=0,t2=1,flag=0;
    for(int i=0;i<x;i++){
    next=t1+t2;
    t1=t2;
    t2=next;
    if(next==x)
        flag=1;
    }
    if(flag==1)
        cout<<"Yes. The number is present in the term of Fibonacci series.";
    else
        cout<<"No. The number is not present in the term of Fibonacci series.";
}
