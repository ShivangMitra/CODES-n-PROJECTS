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

        int max = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (max < temp)
            {
                max = temp;
            }
        }

        cout << n - max << "\n";
    }
}