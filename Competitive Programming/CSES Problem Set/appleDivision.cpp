#include<iostream>
#include<climits>
using namespace std;

typedef long long int lli;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n, total=0, ans=INT_MAX;
    cin>>n;
    lli arr[n];
    for(lli i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    for(lli i=0;i< 1<<n; i++){
        lli s = 0;
        for(lli j=0;j<n;j++){
            if(i & 1<<j)
            s += arr[j];
        }
        lli curr = abs((total-s)-s);
        ans = min(ans, curr);
    }
    cout<<ans;
}