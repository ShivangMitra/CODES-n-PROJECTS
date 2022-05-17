#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli tn;
    cin >> tn;

    while (tn--)
    {
        int k, q;

        cin >> k >> q;

        vector<lli> a(k), b(k);

        for (int i = 0; i < k; i++)
            cin >> a[i];

        for (int i = 0; i < k; i++)
            cin >> b[i];

        vector<lli> ans;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < min(k, 10000); i++)
        {
            for (int j = 0; j < min(k, 10000 / (i + 1)); j++)
                ans.push_back(a[i] + b[j]);
        }
        sort(ans.begin(), ans.end());

        while (q--)
        {
            cin >> k;

            cout << ans[k - 1] << endl;
        }
    }
}