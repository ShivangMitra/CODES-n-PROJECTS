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
        string grps;
        cin >> grps;

        char temp = grps[0];
        lli count = 0;
        bool flag = true;

        if (temp == '0')
        {
            count = 0;
            flag = true;
        }
        else
        {
            count = 1;
            flag = false;
        }

        for (lli i = 1; i < grps.length(); i++)
        {
            if (temp != grps[i] && flag)
            {
                count++;
                temp = grps[i];
                flag = false;
            }
            else if (temp != grps[i])
            {
                temp = grps[i];
                flag = true;
            }
        }

        cout << count << "\n";
    }
}