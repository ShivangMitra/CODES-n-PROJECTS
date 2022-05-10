#include <iostream>
#include <vector>
#include <algorithm>
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

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int jump = n / 4;

        int x = arr[jump];
        int y = arr[2 * jump];
        int z = arr[3 * jump];

        bool flag = true;

        for (int i = jump; i < n; i += jump)
        {
            if (arr[i] == arr[i - 1])
            {
                cout << -1 << "\n";
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << x << " " << y << " " << z << "\n";
        }
    }
}