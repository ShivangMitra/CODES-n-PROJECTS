#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;
    while (tn--)
    {
        long long int n;
        cin >> n;

        vector<vector<long long int>> arr(n, vector<long long int>(n));

        long long int total = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        long long int mx = 0;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx, arr[n - 1][i]);
        }

        total += mx;

        long long int prev = mx;
        long long int flag = true;

        for (int i = n - 2; i >= 0; i--)
        {
            mx = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] < prev)
                {
                    mx = max(mx, arr[i][j]);
                }
            }
            if (mx == 0)
            {
                cout << -1 << "\n";
                flag = false;
                break;
            }
            total += mx;
            prev = mx;
        }

        if (flag)
        {
            cout << total << "\n";
        }
    }
}