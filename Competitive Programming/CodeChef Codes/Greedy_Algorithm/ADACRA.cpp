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

        char previous = s[0];
        char current;

        int segments = 0;

        for (int i = 1; i < s.length(); i++)
        {
            current = s[i];
            if (current != previous)
            {
                segments++;
                previous = current;
            }
        }

        cout << (segments + 1) / 2 << "\n";
    }
}