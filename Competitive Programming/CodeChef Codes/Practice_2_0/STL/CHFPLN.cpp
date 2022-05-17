#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;

    while (tn--)
    {
        int n;
        cin >> n;

        map<int, int> map;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            map[temp]++;

            if (map[temp] <= temp - 1)
            {
                sum++;
            }
        }

        cout << sum << "\n";
    }
}