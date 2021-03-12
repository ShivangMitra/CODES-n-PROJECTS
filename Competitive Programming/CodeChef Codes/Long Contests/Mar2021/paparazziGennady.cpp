#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long int lli;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> p, st;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            p.push_back({i + 1, v});
        }
        if (n == 2)
        {
            cout << 1 << "\n";
            continue;
        }
        st.push_back(p[0]);
        st.push_back(p[1]);
        int ans = 1, sz = st.size();
        for (int i = 2; i < n; i++)
        {
            while (st.size() >= 2)
            {
                double s1 = ((double)st[sz - 1].second - (double)st[sz - 2].second) / ((double)st[sz - 1].first - (double)st[sz - 2].first);
                double s2 = ((double)p[i].second - (double)st[sz - 1].second) / ((double)p[i].first - (double)st[sz - 1].first);
                if (s1 <= s2)
                {
                    st.pop_back();
                    sz--;
                }
                else
                    break;
            }
            st.push_back(p[i]);
            sz++;
            ans = max(ans, st[sz - 1].first - st[sz - 2].first);
        }
        cout << ans << "\n";
    }
}