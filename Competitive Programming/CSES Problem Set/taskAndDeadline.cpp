#include<iostream>
#include<vector>
#include<algorithm>

#define lli long long int

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
    sort(arr.begin(), arr.end());
    lli total = 0, curr = 0;
    for(auto ele : arr)
    {
        curr += ele.first;
        total += ele.second - curr;
    }
    cout << total;
}