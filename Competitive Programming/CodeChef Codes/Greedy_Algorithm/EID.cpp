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

        vector<int> arr;

        int min_diff;
        int temp_diff;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());
        min_diff = arr[n - 1] - arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            temp_diff = arr[i + 1] - arr[i];
            if (temp_diff < min_diff)
            {
                min_diff = temp_diff;
            }
        }

        cout << min_diff << "\n";
    }
}