#include <iostream>
#include <map>
using namespace std;

typedef long long int lli;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli t;
    cin >> t;

    while (t--)
    {
        lli n, m, k;
        cin >> n >> m >> k;

        map<lli, pair<lli, lli>> plants;
        map<pair<lli, lli>, bool> cord;

        for (lli i = 0; i < k; i++)
        {
            lli x, y;
            cin >> x >> y;
            plants[i].first = x;
            plants[i].second = y;
            cord[{x, y}] = true;
        }

        lli totalF = 0;

        for (lli i = 0; i < k; i++)
        {
            lli x, y;
            x = plants[i].first;
            y = plants[i].second;
            lli tempF = 4;
            if (cord[{x + 1, y}] == true)
            {
                tempF--;
            }
            if (cord[{x - 1, y}] == true)
            {
                tempF--;
            }
            if (cord[{x, y + 1}] == true)
            {
                tempF--;
            }
            if (cord[{x, y - 1}] == true)
            {
                tempF--;
            }

            totalF += tempF;
        }

        cout << totalF << "\n";
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) {
//         int m,n,k;
//         long long ans = 0;
//         cin >> n >> m >> k;

//         set<pair<int,int>>points;

//         for(int i = 0; i < k; i++) {
//             int x,y;
//             cin >> x >> y;
//             points.insert(make_pair(x,y));
//         }

//         for(auto itr : points) {
//             if(points.count(make_pair(itr.first - 1,itr.second)) == 0)
//                 ans++;
//             if(points.count(make_pair(itr.first,itr.second - 1)) == 0)
//                 ans++;
//             if(points.count(make_pair(itr.first + 1,itr.second)) == 0)
//                 ans++;
//             if(points.count(make_pair(itr.first,itr.second + 1)) == 0)
//                 ans++;
//         }
//         cout << ans << endl;

//     }

// 	return 0;
// }