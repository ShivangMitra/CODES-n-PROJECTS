#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tn;
    cin >> tn;

    while (tn--)
    {
        int n, current, previous, temp_diff = 0, res = 0;
        cin >> n;

        cin >> previous;

        for (int i = 1; i < n; i++)
        {
            cin >> current;

            if (current > previous)
            {
                temp_diff = current - previous;
                if (temp_diff > res)
                {
                    res = temp_diff;
                }
            }
            else
            {
                previous = current;
            }
        }

        if (res == 0)
        {
            cout << "UNFIT\n";
        }
        else
        {
            cout << res << "\n";
        }
    }
}