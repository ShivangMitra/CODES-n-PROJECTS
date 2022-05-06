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
        string s;
        cin >> s;

        int i = 0;
        int pair = 0;

        while (i < s.length() - 1)
        {
            if (s[i] != s[i + 1])
            {
                pair++;
                i = i + 2;
            }
            else
            {
                i++;
            }
        }

        cout << pair << "\n";
    }
}