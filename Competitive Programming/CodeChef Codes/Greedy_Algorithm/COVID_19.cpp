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
        int n, m;
        cin >> n >> m;

        int row, col;
        if (n % 2 == 0)
        {
            row = n / 2;
        }
        else
        {
            row = (n / 2) + 1;
        }
        if (m % 2 == 0)
        {
            col = m / 2;
        }
        else
        {
            col = (m / 2) + 1;
        }

        cout << row * col << "\n";
    }
}