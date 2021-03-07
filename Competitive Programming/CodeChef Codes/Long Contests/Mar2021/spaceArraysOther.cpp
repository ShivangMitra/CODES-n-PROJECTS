#include <iostream>
#include <algorithm>
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int val = 0;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if ((i + 1 - a[i]) < 0)
            {
                flag = 1;
                break;
            }
            val = val + (i + 1 - a[i]);
        }

        if (flag == 1)
        {
            cout << "Second"
                 << "\n";
        }
        else
        {
            if (val % 2 == 1)
            {
                cout << "First"
                     << "\n";
            }
            else
            {
                cout << "Second"
                     << "\n";
            }
        }
    }
}