#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxProfit = 0;

        for (int i = 0; i < n; i++)
        {
            int s, p, v, tempMax = 0;
            cin >> s >> p >> v;
            tempMax += (p / (s + 1)) * v;
            if (tempMax > maxProfit)
            {
                maxProfit = tempMax;
            }
        }
        cout << maxProfit << "\n";
    }
}