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

        vector<int> arr(2 * n);

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        cout << arr[(n - 1) + ((n / 2) + 1)] << "\n";

        for (int i = 0, j = n; i < n, j < 2 * n; i++, j++)
        {
            cout << arr[i] << " " << arr[j] << " ";
        }

        cout << "\n";
    }
}