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
        int n, k;
        cin >> n >> k;

        int a[200005] = {0};

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a[temp] = 1;
        }

        int count = 0;

        for (int i = 0; i < 200005; i++)
        {
            if (a[i] == 0)
            {
                count++;
                if (count == k + 1)
                {
                    cout << i << "\n";
                    break;
                }
            }
        }
    }
}