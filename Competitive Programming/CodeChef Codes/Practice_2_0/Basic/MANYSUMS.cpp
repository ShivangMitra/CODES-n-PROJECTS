#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;
    while (tn--)
    {
        int l, r;
        cin >> l >> r;

        int n = r - l + 1;

        cout << n + (n - 1) << "\n";
    }
}