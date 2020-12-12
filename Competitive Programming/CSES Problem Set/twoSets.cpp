#include<iostream>
#include<vector>
using namespace std;

typedef long long int lli;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;

    ll t = n * (n + 1) / 2;
    if(t % 2) cout<<"NO\n";
    else{
        vector<ll> arr1, arr2;
        t /= 2LL;
        while(n){
            if(t - n >= 0){
                arr1.push_back(n);
                t -= n;   
            }
            else{
                arr2.push_back(n);
            }
            n--;
        }

        cout<<"YES\n";
        cout<<arr1.size()<<"\n";
        for(int i=0;i<arr1.size();i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<"\n"<<arr2.size()<<"\n";
        for(int i=0;i<arr2.size();i++)
        {
            cout<<arr2[i]<<" ";
        }
    }
}