//Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
int maxi(int,int);
float maxi(float,float);
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two integer number : ";
    cin>>a>>b;
    cout<<"Enter two real number : ";
    cin>>x>>y;
    cout<<"Maximum between two integer numbers is : "<<maxi(a,b);
    cout<<"\nMaximum between two real number is : "<<maxi(x,y);
    return 0;
}
int maxi(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
float maxi(float x,float y)
{
    if(x>=y)
        return x;
    else
        return y;
}
