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
        int n, k, l;
        cin >> n >> k >> l;

        int max = 0;
        int temp;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;

            if (max < temp)
            {
                max = temp;
            }
        }

        if (n == 1)
        {
            cout << "YES\n";
        }
        else
        {
            if ((temp + (k * (l - 1))) > max)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}