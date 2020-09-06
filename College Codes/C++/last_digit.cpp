#include<iostream>
using namespace std;

int main()
{
    cout<<"enter two numbers";
    int a,b;
    cin>>a>>b;
    if(a%10 == b%10)
    cout<<"they have same last digit";
    else
    {
        cout<<"they do not have the same last digit";
    }
    
    return 0;
}