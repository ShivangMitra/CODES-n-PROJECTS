#include <iostream>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    lli t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        lli sum = 0, setSum = (n * (n + 1)) / 2, temp;
        for (lli i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }
        if (setSum < sum)
        {
            cout << "Second"
                 << "\n";
        }
        else
        {
            if ((setSum - sum) % 2 == 0)
            {
                cout << "Second"
                     << "\n";
            }
            else
            {
                cout << "First"
                     << "\n";
            }
        }
    }
}