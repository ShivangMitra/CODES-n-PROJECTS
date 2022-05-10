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
        long long int n, k;
        cin >> n >> k;

        long long int total = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (temp < k)
            {
                total += k - temp;
            }
            else
            {
                long long int div = temp % k;
                total += min(div, k - div);
            }
        }
        cout << total << "\n";
    }
}