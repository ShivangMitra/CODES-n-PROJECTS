#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define lli long long int
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

        vector<pair<int, int>> arr(m);
        vector<bool> used(n, false);
        vector<int> mm(m);
        int t = 0;

        for (int i = 0; i < m; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }

        for (int i = m - 1; i >= 0; i--)
        {
            if (used[arr[i].first] == false && used[arr[i].second] == false)
            {
                used[arr[i].first] = true;
                used[arr[i].second] = true;
                mm[t++] = i;
            }
        }
        for (int i = t - 1; i >= 0; i--)
        {
            cout << mm[i] << ' ';
        }
        cout << '\n';
    }
}