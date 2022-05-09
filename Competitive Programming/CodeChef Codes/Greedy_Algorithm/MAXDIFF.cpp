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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        lli total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total_sum += arr[i];
        }

        sort(arr.begin(), arr.end());

        lli kid_sum = 0;

        for (int i = 0; i < min(k, n - k); i++)
        {
            kid_sum += arr[i];
        }

        cout << total_sum - (2LL * kid_sum) << "\n";
    }
}