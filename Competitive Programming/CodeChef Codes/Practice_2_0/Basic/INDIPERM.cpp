#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;
    while (tn--)
    {
        int n;
        cin >> n;

        cout << n << " ";

        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
        }

        cout << "\n";
    }
}