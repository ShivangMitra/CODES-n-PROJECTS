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

        if (n > k * l)
        {
            cout << -1;
        }
        else if (k == 1 && n != 1)
        {
            cout << -1;
        }
        else
        {
            int i = 0;
            while (n--)
            {
                cout << i + 1 << " ";
                i = (i + 1) % k;
            }
        }

        cout << "\n";
    }
}