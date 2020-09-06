#include<iostream>
using namespace std;

int main()
{
    int a,b,gcd;
    cout<<"enter two numbers";
    cin>>a>>b;
    if(a>b)
    {
        for(int i=1;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            gcd=i;
        }
    }
    else
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            gcd=i;
        }
    }
    cout<<"the gcd is "<<gcd;
    return 0;
}