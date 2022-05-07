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
        int n, s;
        cin >> n >> s;

        int temp;

        vector<int> price(n);
        vector<int> type0;
        vector<int> type1;

        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp == 0)
            {
                type0.push_back(price[i]);
            }
            else
            {
                type1.push_back(price[i]);
            }
        }

        sort(type0.begin(), type0.end());
        sort(type1.begin(), type1.end());

        if (type0[0] + type1[0] <= 100 - s)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}