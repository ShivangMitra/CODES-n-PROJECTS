#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int g;
        cin >> g;
        while (g--)
        {
            int i, n, q;
            cin >> i >> n >> q;
            if (n % 2 == 0 || i == q)
                cout << (n / 2) << "\n";
            else
                cout << ((n / 2) + 1) << "\n";
        }
    }
}