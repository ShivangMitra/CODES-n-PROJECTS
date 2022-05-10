#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        string x, y;
        cin >> x;
        cin >> y;

        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == y[i])
            {
                if (x[i] == 'B')
                {
                    cout << 'W';
                }
                else
                {
                    cout << 'B';
                }
            }
            else
            {
                cout << 'B';
            }
        }

        cout << "\n";
    }
}