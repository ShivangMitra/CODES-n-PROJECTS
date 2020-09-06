#include<iostream>
using namespace std;

void primefac(int n)
{
    int fac=2,prime;
    while(fac<=n)
    {
        prime=0;
        for(int i=2;i<fac/2;i++)
        {
            if(fac%i==0)
            prime=1;
        }
        if(n%fac==0 && prime==0)
        {
            cout<<" "<<fac;
            n=n/fac;
        }
        if(n%fac != 0)
        fac++;
    }
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    primefac(n);
    return 0;
}