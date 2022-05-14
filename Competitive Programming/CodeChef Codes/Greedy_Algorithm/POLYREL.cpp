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

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
        }

        int sum = 0;

        while (n > 5)
        {
            sum += n;
            n = n / 2;
        }

        sum += n;

        cout << sum << "\n";
    }
}