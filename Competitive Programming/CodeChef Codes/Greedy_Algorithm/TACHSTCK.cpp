#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;

    vector<int> sticks(n);

    for (int i = 0; i < n; i++)
    {
        cin >> sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    int total = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (sticks[i + 1] - sticks[i] <= d)
        {
            total++;
            i += 1;
        }
    }

    cout << total;
}