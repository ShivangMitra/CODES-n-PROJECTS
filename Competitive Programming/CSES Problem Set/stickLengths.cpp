#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(), a.end());
    int mid = a[n/2];
    long long cost = 0;
    for(int i=0;i<n;i++) cost += abs(a[i] - mid);
    cout << cost;
}