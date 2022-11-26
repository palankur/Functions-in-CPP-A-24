//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include<iostream>
using namespace std;
float area(int r);
int area(int l,int b);
double area(float a,float h);
int main()
{
    int r,l,b;
    float a,h;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"Enter the length and breath of the rectangle : ";
    cin>>l>>b;
    cout<<"Enter base and height of the triangle : ";
    cin>>a>>h;
    cout<<"Area of circle is : "<<area(r);
    cout<<"\nArea of rectangle is : "<<area(l,b);
    cout<<"\nArea of square is : "<<area(a,h);
    return 0;

}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
double area(float a,float h)
{
    return 0.5*a*h;
}
