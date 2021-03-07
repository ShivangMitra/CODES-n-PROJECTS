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
        lli n;
        cin >> n;

        lli tokens = 0, temp;
        cin >> temp;
        tokens += temp;

        for (int i = 1; i < n; i++)
        {
            lli newTemp;
            cin >> newTemp;
            if (newTemp >= temp)
            {
                tokens += temp;
            }
            else
            {
                temp = newTemp;
                tokens += temp;
            }
        }

        cout << tokens << "\n";
    }
}