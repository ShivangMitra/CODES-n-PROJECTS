#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y, maxp = 0, curr = 0;
    vector<pair<int, bool>> arr;
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        arr.push_back(make_pair(x, true));
        arr.push_back(make_pair(y, false));
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++)
    {
        curr += arr[i].second ? 1 : -1;
        maxp = max(maxp, curr);
    }
    cout << maxp;
}