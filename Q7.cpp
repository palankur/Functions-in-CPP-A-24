//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int x,y,z;
    cout<<"Enter two/three numbers : ";
    cin>>x>>y>>z;
    cout<<"Addition is (first two numbers) : "<<add(x,y);
    return 0;
}
int add(int x,int y,int z)
{
    return x+y+z;
}

