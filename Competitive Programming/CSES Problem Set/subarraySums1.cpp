#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x,j=0,k=0,c=0,s=0;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    while(j < n)
    {
        if(s < x)
        {
            if(k >= n) break;
            s += a[k++];
        }
        else if(s > x) s-= a[j++];
        else
        {
            s -= a[j++];
            s += a[k++];
        }
        if(s==x) c++;
    }
    cout << c;
}