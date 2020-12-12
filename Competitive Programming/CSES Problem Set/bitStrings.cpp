//The answer can be very large so modulo by 10^9+7 is returned

#include<iostream>
using namespace std;

typedef long long int ll;

const ll mod = 1e9 + 7;

ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x %= p;
    while(y)
    {
        if(y & 1)
            res = (res * x) % p;
        y >>= 1; //y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    cout<<power(2, n, mod);
}