#include <iostream>
#include <algorithm>
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

        int temp_count = 0;
        int max_count = 0;
        char current;

        for (int i = 0; i < s.length(); i++)
        {
            current = s[i];
            if (current == '(')
            {
                temp_count++;
            }
            else
            {
                temp_count--;
            }
            max_count = max(temp_count, max_count);
        }

        for (int i = 0; i < max_count; i++)
        {
            cout << "(";
        }
        for (int i = 0; i < max_count; i++)
        {
            cout << ")";
        }
        cout << "\n";
    }
}