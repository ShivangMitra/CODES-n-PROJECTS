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

        int instructions = 1;

        int buffer = (int)s[0];

        for (int i = 1; i < s.length(); i++)
        {
            if ((int)s[i] > buffer)
            {
                instructions += (int)s[i] - buffer;
            }
            else if ((int)s[i] < buffer)
            {
                instructions += 122 - buffer;
                instructions += (int)s[i] - 96;
            }
            buffer = (int)s[i];
            instructions++;
        }

        if (instructions + 1 <= (11 * s.length()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}