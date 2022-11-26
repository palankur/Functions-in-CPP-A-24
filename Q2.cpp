//Define a function to find the highest value digit in a given number
#include<iostream>
using namespace std;
void highest(int num);
int main()
{
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    highest(num);
    return 0;
}
void highest(int num)
{
    int max=-1;
    while(num!=0)
        {
        if(max<num%10)
            max=num%10;
        num=num/10;
        }
        cout<<"Highest digit of the given number is : "<<max;

}
