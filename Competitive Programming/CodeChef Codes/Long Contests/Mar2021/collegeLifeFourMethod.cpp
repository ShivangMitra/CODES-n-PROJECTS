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
        lli n, e, c, po, pm, pk;
        cin >> n >> e >> c >> po >> pm >> pk;

        vector<lli> sol;
        vector<lli> kvec;

        for (int i = 0; i <= n + 1; i++)
        {
            kvec.push_back(i);
        }
        for (lli m = 0; m <= n; m++)
        {
            lli idx1 = lower_bound(kvec.begin(), kvec.end(), (2 * n - e - 2 * m)) - kvec.begin();
            lli idx2 = upper_bound(kvec.begin(), kvec.end(), (c - 3 * m)) - kvec.begin() - 1;
            if (idx2 < idx1 || idx1 == n + 1)
                continue;
            if (idx2 == n + 1 && idx2 + 3 * m > c)
                continue;

            lli k;
            if (pk > po)
                k = (idx1 < (n - m) ? idx1 : (n - m));
            else
                k = (idx2 < (n - m) ? idx2 : (n - m));

            lli o = n - k - m;
            if (k + 2 * m >= 2 * n - e && k + 3 * m <= c)
            {
                sol.push_back(po * o + pm * m + pk * k);
            }
        }
        if (sol.size() == 0)
            cout << -1 << "\n";
        else
        {
            lli min = sol[0];
            for (lli i = 0; i < sol.size(); i++)
            {
                if (sol[i] < min)
                    min = sol[i];
            }
            cout << min << "\n";
        }
    }
}