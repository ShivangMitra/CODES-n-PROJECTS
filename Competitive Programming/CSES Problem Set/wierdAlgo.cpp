#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    while (true)
    {
        // cout << n << " ";
        printf("%d ",n);
        if(n==1)break;
        if(n%2==0)n/=2;
        else n = n*3+1;
    }
}