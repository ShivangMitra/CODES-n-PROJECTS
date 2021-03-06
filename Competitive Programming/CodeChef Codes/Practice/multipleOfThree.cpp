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
        lli k, d0, d1;
        cin >> k >> d0 >> d1;

        lli sum = 0;

        sum = d0 + d1;

        if (sum == 5 || sum == 10)
        {
            cout << "NO\n";
            continue;
        }

        int digit = sum % 10;

        while ((k - 2) > 2)
        {
            if (digit == 8 || digit == 6 || digit == 2 || digit == 4)
                break;
            sum += digit;
            digit = sum % 10;
            k--;
        }
        lli paired, left;

        paired = k / 4;
        left = k % 4;

        sum = sum + (paired * 20);

        int arr[] = {8, 6, 2, 4, 8, 6};

        int p = 0;
        if (digit == 8)
        {
            p = 0;
        }
        else if (digit == 6)
        {
            p = 1;
        }
        else if (digit == 2)
        {
            p = 2;
        }
        else if (digit == 4)
        {
            p = 3;
        }

        for (int i = 0; i < left; i++)
        {
            sum += arr[p];
            p++;
        }

        if (sum % 3 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

// mod 10 = 1000000007