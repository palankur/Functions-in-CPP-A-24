//Write functions using function overloading to add two numbers having different data types
#include<iostream>
using namespace std;
int add(int,int);
float add(int,float);
float add(float,float);
float add(float,int);
int main()
{
    cout<<"Addition of the number is : "<<add(2,3);
    cout<<"\nAddition of the number is : "<<add(5,7.99f);
    cout<<"\nAddition of the number is : "<<add(8.45f,4.67f);
    cout<<"\nAddition of the number is : "<<add(6.74f,5);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}

float add(int a,float b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
float add(float a,int b)
{
    return a+b;
}




