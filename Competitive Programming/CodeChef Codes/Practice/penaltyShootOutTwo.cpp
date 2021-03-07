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
        string goals;
        cin >> goals;

        int a = 0, b = 0, ra = n, rb = n;

        bool lastball = true;

        for (int i = 0; i < (2 * n); i++)
        {
            if (goals[i] == '1' && i % 2 == 0)
            {
                a++;
                ra--;
            }
            else if (goals[i] == '0' && i % 2 == 0)
            {
                ra--;
            }
            else if (goals[i] == '1' && i % 2 != 0)
            {
                b++;
                rb--;
            }
            else if (goals[i] == '0' && i % 2 != 0)
            {
                rb--;
            }
            if ((a - b) > rb)
            {
                cout << i + 1 << "\n";
                lastball = false;
                break;
            }
            else if ((b - a) > ra)
            {
                cout << i + 1 << "\n";
                lastball = false;
                break;
            }
        }
        if (lastball)
        {
            cout << 2 * n << "\n";
        }
    }
}