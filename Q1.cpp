//Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
void prime(int i);
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    prime(num);
    return 0;
}
void prime(int i)
{
    int flag=0;
    for(int m=2;m<=i/2;m++)
    {
        if(i%m==0)
        {
        cout<<"It is not a prime number.";
        flag=1;
        break;
        }
    }
    if(flag==0)
    cout<<"It is a prime number.";
}
