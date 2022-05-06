#include <iostream>
#include <map>
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

        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            map[temp]++;
        }
        int max_freq = 0;

        for (auto i : map)
        {
            max_freq = max(max_freq, i.second);
        }

        cout << (n - max_freq) << "\n";
    }
}