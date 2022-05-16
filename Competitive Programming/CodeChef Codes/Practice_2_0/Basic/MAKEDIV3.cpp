#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;
    while (tn--)
    {
        int n;
        cin >> n;

        if (n > 1)
        {
            cout << "1";
            for (int i = 0; i < (n - 2); i++)
            {
                cout << "0";
            }
            cout << "5" << endl;
        }
        else if (n == 1)
        {
            cout << "3" << endl;
        }
    }
}