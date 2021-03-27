#include <iostream>
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
        lli x, r, m;
        cin >> x >> r >> m;

        r = r * 60;
        m = m * 60;

        lli ran = 0;
        bool flag = true;

        while (m > 0)
        {
            if (((m - x) > 0) && flag)
            {
                flag = false;
                m = m - x;
                ran = ran + x;
                if (ran >= r)
                {
                    cout << "YES\n";
                    break;
                }
            }
            else if (((m - x) <= 0) && flag)
            {
                flag = false;
                ran = ran + m;
                m = 0;
                if (ran >= r)
                {
                    cout << "YES\n";
                    break;
                }
            }
            else if (((m - x) > 0) && (flag == false))
            {
                flag = true;
                m = m - x;
            }
            else if (((m - x) <= 0) && (flag == false))
            {
                flag = true;
                m = 0;
            }
        }
        if (ran < r)
        {
            cout << "NO\n";
        }
    }
}