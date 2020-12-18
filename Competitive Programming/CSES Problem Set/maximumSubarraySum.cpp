#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long int lli;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<lli> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    lli curr_best = arr[0], global_best = arr[0];
    for(int i=1;i<n;i++)
    {
        curr_best = max(curr_best + arr[i], arr[i]);
        global_best = max(global_best, curr_best);
    }
    cout << global_best;
}