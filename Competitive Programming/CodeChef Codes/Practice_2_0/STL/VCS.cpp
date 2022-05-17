#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tn;
    cin >> tn;

    while (tn--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        map<int, int> map;

        int common = 0;

        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            map[temp]++;
        }

        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            map[temp]++;

            if (map[temp] == 2)
            {
                common++;
            }
        }

        cout << common << " " << n - map.size() << "\n";
    }
}