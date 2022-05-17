#include <iostream>
#include <map>
#include <vector>
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

        map<string, int> map;
        vector<pair<string, string>> names(n);

        for (int i = 0; i < n; i++)
        {
            string f, l;
            cin >> f >> l;

            map[f]++;

            names[i].first = f;
            names[i].second = l;
        }

        for (int i = 0; i < n; i++)
        {
            if (map[names[i].first] > 1)
            {
                cout << names[i].first << " " << names[i].second << "\n";
            }
            else
            {
                cout << names[i].first << "\n";
            }
        }
    }
}