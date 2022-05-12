#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tn;
    cin >> tn;
    while (tn--)
    {
        int n, x;
        cin >> n >> x;

        map<int, int> map;

        int distinct = 0;
        int can_have = n - x;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            map[temp]++;

            if (map[temp] == 1 && can_have > 0)
            {
                distinct++;
                can_have--;
            }
        }

        cout << distinct << "\n";
    }
}