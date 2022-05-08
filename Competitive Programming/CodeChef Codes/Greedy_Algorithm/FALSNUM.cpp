#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        string a;
        cin >> a;

        string first = '1' + a;
        string second = a[0] + ('0' + a.substr(1));

        if ((int)first[0] < (int)second[0])
        {
            cout << first << "\n";
        }
        else if ((int)first[0] > (int)second[0])
        {
            cout << second << "\n";
        }
        else
        {
            if ((int)first[1] < (int)second[1])
            {
                cout << first << "\n";
            }
            else
            {
                cout << second << "\n";
            }
        }
    }
}