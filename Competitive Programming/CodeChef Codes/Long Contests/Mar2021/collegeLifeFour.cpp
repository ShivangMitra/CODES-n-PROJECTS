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
        lli n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;

        lli cpe = e, cph = h, cpn = n;

        lli minPrice = 0;

        vector<pair<lli, string>> prices(3);
        prices[0].first = a;
        prices[0].second = "a";
        prices[1].first = b;
        prices[1].second = "b";
        prices[2].first = c;
        prices[2].second = "c";

        sort(prices.begin(), prices.end());

        for (lli i = 0; i < 3; i++)
        {
            if (prices[i].second == "a")
            {
                if (e > 0)
                {
                    if ((e / 2) < n)
                    {
                        minPrice += ((e / 2) * a);
                        n = n - (e / 2);
                        e = e - ((e / 2) * 2);
                    }
                    else
                    {
                        minPrice += n * a;
                        e = 0;
                        n = 0;
                        break;
                    }
                }
            }
            else if (prices[i].second == "b")
            {
                if (h > 0)
                {
                    if ((h / 3) < n)
                    {
                        minPrice += ((h / 3) * b);
                        n = n - (h / 3);
                        h = h - ((h / 3) * 3);
                    }
                    else
                    {
                        minPrice += n * b;
                        h = 0;
                        n = 0;
                        break;
                    }
                }
            }
            else if (prices[i].second == "c")
            {
                if ((e > 0) && (h > 0))
                {
                    if ((min(e, h)) < n)
                    {
                        lli temp = min(e, h);
                        minPrice += temp * c;
                        n = n - temp;
                        e = e - temp;
                        h = h - temp;
                    }
                    else
                    {
                        minPrice += n * c;
                        e = e - n;
                        h = h - n;
                        n = 0;
                        break;
                    }
                }
            }
        }
        if (n > 0)
        {
            if ((cpe > 0) && (cph > 0))
            {
                if ((cpe >= cpn) && (cph >= cpn))
                {
                    cout << min(cpe, cph) * c << "\n";
                }
                else
                {
                    cout << -1 << "\n";
                }
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            if ((cpe > 0) && (cph > 0))
            {
                if ((min(cpe, cph)) >= cpn)
                {
                    if ((cpn * c) < minPrice)
                    {
                        cout << cpn * c << "\n";
                    }
                    else
                    {
                        cout << minPrice << "\n";
                    }
                }
                else
                {
                    cout << minPrice << "\n";
                }
            }
            else
            {
                cout << minPrice << "\n";
            }
        }
    }
}