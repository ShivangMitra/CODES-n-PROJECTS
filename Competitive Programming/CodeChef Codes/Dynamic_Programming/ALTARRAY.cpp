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
        int n, current, previous;
        int max = 1;
        cin >> n;

        cin >> previous;

        for (int i = 1; i < n; i++)
        {
            cin >> current;

            if (previous > 0 && current < 0 || previous < 0 && current > 0)
            {
                max++;
            }
            else
            {
                while (max >= 1)
                {
                    cout << max << " ";
                    max--;
                }
                max = 1;
            }
            previous = current;
        }
        while (max >= 1)
        {
            cout << max << " ";
            max--;
        }
        cout << "\n";
    }
}