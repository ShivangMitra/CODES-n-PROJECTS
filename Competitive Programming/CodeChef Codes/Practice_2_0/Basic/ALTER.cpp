#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;
    while (tn--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;

        if (p % a == 0 && q % b == 0)
        {
            if ((abs((p / a) - (q / b))) <= 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
}