#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        int l;
        cin >> l;

        string s;
        cin >> s;

        double deed = 0;
        bool flag = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                deed++;
            }
            if (((deed / (i + 1)) * 100) >= 50)
            {
                cout << "YES\n";
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "NO\n";
        }
    }
}