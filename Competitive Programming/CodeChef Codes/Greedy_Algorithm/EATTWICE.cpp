#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        int n, m;
        cin >> n >> m;
        int di, vi;

        vector<pair<int, int>> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> di >> vi;
            p[i].first = vi;
            p[i].second = di;
        }

        sort(p.begin(), p.end(), greater<pair<int, int>>());

        for (auto &x : p)
        {
            if (x.second != p[0].second)
            {
                cout << (p[0].first + x.first) << endl;
                break;
            }
        }
    }
}