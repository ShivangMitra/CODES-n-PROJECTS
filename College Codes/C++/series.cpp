#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;double sum=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(1/pow(i,i));
    }
    cout<<"sum of series is "<<sum;
    return 0;
}