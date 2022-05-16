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
        int r, c, k;
        cin >> r >> c >> k;

        cout << (min(8, r + k) - max(1, r - k) + 1) * (min(8, c + k) - max(1, c - k) + 1) << "\n";
    }
}