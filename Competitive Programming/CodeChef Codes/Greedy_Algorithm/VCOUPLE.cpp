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
        int n;
        cin >> n;

        vector<int> boys(n);
        vector<int> girls(n);

        for (int i = 0; i < n; i++)
        {
            cin >> boys[i];
        }

        sort(boys.begin(), boys.end());

        for (int i = 0; i < n; i++)
        {
            cin >> girls[i];
        }

        sort(girls.begin(), girls.end(), greater<int>());

        int max = 0;

        for (int i = 0; i < n; i++)
        {
            if (max < boys[i] + girls[i])
            {
                max = boys[i] + girls[i];
            }
        }

        cout << max << "\n";
    }
}