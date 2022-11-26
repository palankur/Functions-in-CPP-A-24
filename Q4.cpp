//Define a function to print Pascal Triangle up to N lines
#include<iostream>
using namespace std;
int fact(int m)
{
    int i;
    if(m<=0)
        return 1;
    int fact=1;
    for(i=1;i<=m;i++)
        fact=fact*i;
    return fact;
}
int comb(int x,int y)
{
    int comb=fact(x)/(fact(y)*fact(x-y));
    return comb;
}
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int k=0;
            if(j==0)
                while(k++ <=(n/2 - i+1))
                cout<<" ";
            cout<<" "<<comb(i,j);
        }
        cout<<"\n";
    }

    return 0;
}
