#include<iostream>
#include<vector>
#include<algorithm>

#define pii pair<int, int>
#define pb push_back

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y;
    cin >> n;
    vector<pair<int, pii>> v;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        v.pb({x, {-1, i}});
        v.pb({y, {1, i}});
    }
    sort(v.begin(), v.end());

    vector<int> rooms;
    int occupied = 0, max_rooms = 0, int_or_out, ind;
    int ans[200005];
    for(auto ele : v)
    {
        int_or_out = ele.second.first;
        ind = ele.second.second;

        if(int_or_out == 1)
        {
            rooms.pb(ans[ind]);
        }
        else if(occupied == rooms.size())
        {
            ans[ind] = ++max_rooms;
        }
        else
        {
            ans[ind] = rooms[occupied++];
        }
    }
    cout << max_rooms << "\n";
    for(int i=0;i<n;i++)
    {
        cout << ans[i] << " ";
    }
}