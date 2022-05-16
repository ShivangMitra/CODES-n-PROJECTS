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
        double u, v, a, s;
        cin >> u >> v >> a >> s;

        double vi = (u * u) - (2 * a * s);

        if (vi <= v * v)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}