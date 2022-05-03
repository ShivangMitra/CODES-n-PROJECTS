#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        bool flag = false;
        for (int mask = 0; mask < (1 << n); mask++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    sum += a[i];
                }
            }
            if (sum == s)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}