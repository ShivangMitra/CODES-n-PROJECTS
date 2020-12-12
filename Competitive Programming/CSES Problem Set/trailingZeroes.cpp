#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    int total = 0;
    for(int i=5; n / i >=1; i*=5)
    {
        total += n / i;
    }
    cout<<total;
}