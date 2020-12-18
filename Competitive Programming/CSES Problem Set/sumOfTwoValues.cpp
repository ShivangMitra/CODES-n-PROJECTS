#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr.begin(), arr.end());
    int i=0, j=n-1;
    while(i<j)
    {
        if(arr[i].first + arr[j].first == x)
        {
            cout << arr[i].second << " " << arr[j].second;
            return 0;
        }
        if(arr[i].first + arr[j].first < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "IMPOSSIBLE";
}