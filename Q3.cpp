//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
void product(int x,int y);
int main()
{
    int x,y;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the power : ";
    cin>>y;
    product(x,y);
    return 0;
}
void product(int x,int y)
{
    int product=1;
    while(y!=0)
    {
        product*=x;
        y--;
    }
    cout<<"The result is : "<<product;
}
