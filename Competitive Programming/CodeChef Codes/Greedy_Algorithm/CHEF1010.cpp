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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ones = 0;
        int zros = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                zros++;
            }
            else
            {
                ones++;
            }
        }

        int ans = min(ones, zros) - 1;

        if (ans > 0)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}