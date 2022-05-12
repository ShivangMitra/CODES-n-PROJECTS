#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
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

        double conc = (arr[n - 1] + arr[n - 2]) / 2;

        for (int i = n - 3; i >= 0; i--)
        {
            conc = (conc + arr[i]) / 2;
        }

        cout << fixed << setprecision(8) << conc << "\n";
    }
}