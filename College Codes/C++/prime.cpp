#include<iostream>
using namespace std;
int main()
{
    int n,prime=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime==1)
    cout<<"not prime";
    else
    {
        cout<<"prime";
    }
    return 0;
    
}