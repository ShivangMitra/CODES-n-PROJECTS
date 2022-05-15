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
        long long int n, k;
        cin >> n >> k;

        vector<int> a(n);

        long long int max = 0;
        long long int total = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;

            if (max < abs(temp))
            {
                max = abs(temp);
            }

            total += temp * a[i];
        }

        cout << 1LL * (total + (max * k)) << "\n";
    }
}