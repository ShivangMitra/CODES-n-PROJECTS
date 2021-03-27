#include <iostream>
#include <map>

using namespace std;

typedef long long int lli;

int main()
{
    lli n, m;
    cin >> n >> m;
    map<string, string> chefs;
    map<string, lli> votes;
    map<string, lli> country;

    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        chefs[s1] = s2;
    }

    for (int i = 0; i < m; i++)
    {
        string f1;
        cin >> f1;
        votes[f1]++;
        country[chefs[f1]]++;
    }

    lli max1 = 0, max2 = 0;
    string maxVal1, maxVal2;
    for (auto x : country)
    {
        if (max1 < x.second)
        {
            max1 = x.second;
            maxVal1 = x.first;
        }
    }
    for (auto x : votes)
    {
        if (max2 < x.second)
        {
            max2 = x.second;
            maxVal2 = x.first;
        }
    }

    cout << maxVal1 << "\n";
    cout << maxVal2 << "\n";
}