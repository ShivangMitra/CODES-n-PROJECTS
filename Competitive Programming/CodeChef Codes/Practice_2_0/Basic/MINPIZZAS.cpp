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
        int n, k;
        cin >> n >> k;

        cout << n / __gcd(n, k) << "\n";
    }
}