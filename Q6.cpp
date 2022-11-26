//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    swap(x,y);
    return 0;
}
void swap(int &x,int &y)
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<"Swapped values are : "<<x<<"and"<<y;
}
