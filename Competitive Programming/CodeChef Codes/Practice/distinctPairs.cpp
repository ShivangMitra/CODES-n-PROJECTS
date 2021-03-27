#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
    lli n, m;
    cin >> n >> m;
    vector<pair<lli, lli>> a(n);
    vector<pair<lli, lli>> b(m);

    for (lli i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (lli i = 0; i < m; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    lli x = n + m - 2;
    lli indexA = 0, indexB = 0;
    cout << a[indexA].second << " " << b[indexB].second << "\n";
    while (x > 0)
    {
        if (indexB < m - 1)
        {
            indexB++;
            cout << a[indexA].second << " " << b[indexB].second << "\n";
        }
        else if (indexB == m)
        {
            indexB--;
            indexA++;
            cout << a[indexA].second << " " << b[indexB].second << "\n";
        }
        else
        {
            indexA++;
            cout << a[indexA].second << " " << b[indexB].second << "\n";
        }
        x--;
    }
}