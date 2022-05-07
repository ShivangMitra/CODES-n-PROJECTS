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
        int n;
        cin >> n;

        if (((n * (n + 1)) / 2) % 2 == 0)
        {
            cout << n << "\n";
        }
        else
        {
            cout << n - 1 << "\n";
        }
    }
}