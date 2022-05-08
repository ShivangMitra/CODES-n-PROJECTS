#include <iostream>
#include <map>
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

        map<int, int> map;

        bool first = false;
        bool second = false;

        int a = -1, b = -1;

        for (int i = n - 1; i >= 0; i--)
        {
            map[arr[i]]++;

            if (map[arr[i]] == 2)
            {
                if (!first)
                {
                    a = arr[i];
                    first = true;
                    map[arr[i]] = 0;
                }
                else
                {
                    b = arr[i];
                    second = true;
                    break;
                }
            }
        }

        if (first && second)
        {
            cout << a * b << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}