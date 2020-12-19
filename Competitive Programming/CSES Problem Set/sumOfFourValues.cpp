#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<tuple<int, int, int>> b;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            b.emplace_back(a[i] + a[j], i+1, j+1);
    sort(b.begin(), b.end());
    for(int i=0;i<int(b.size())-1;i++)
    {
        int k = get<0>(b[i]);
        if(k > x/2) break;
        auto it = lower_bound(&b[i+1], &b[b.size()], make_tuple(x - k, 0, 0));
        while(k + get<0>(*it) == x)
        {
            int p, q, r, x, y, z;
            tie(x, y, z) = b[i];
            tie(p, q, r) = *it;
            if(y==q || y==r || z==q || z==r)
            {
                it++;
                continue;
            }
            cout << y << " " << z << " " << q << " " << r;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
}