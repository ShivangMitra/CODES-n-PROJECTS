#include<iostream>
using namespace std;

typedef long long int lli;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli k;
    cin >> k;
    for(lli n=1;n<=k;n++)
    {
        cout<< n * n * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2) << "\n";
    }
}