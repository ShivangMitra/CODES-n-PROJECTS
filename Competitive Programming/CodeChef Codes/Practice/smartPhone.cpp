#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int lli;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    cin >> n;
    vector<lli> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    lli result = 0, count = arr.size();

    for (int i = 0; i < n; i++)
    {
        lli temp = arr[i];
        lli tempres = temp * count;
        if (result < tempres)
        {
            result = tempres;
        }
        count--;
    }

    cout << result;
}