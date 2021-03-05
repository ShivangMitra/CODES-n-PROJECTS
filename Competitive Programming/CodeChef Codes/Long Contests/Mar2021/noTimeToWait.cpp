#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, x;

    cin >> n >> h >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if (h <= x)
    {
        cout << "YES";
    }
    else
    {
        if (h <= (x + arr[arr.size() - 1]))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}