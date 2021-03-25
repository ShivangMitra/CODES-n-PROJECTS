#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y, i;
    cin >> n >> x >> y;
    std::vector<std::pair<int, int>> arr(n);
    vector<int> start(x), end(y);

    for (i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;
    for (i = 0; i < x; i++)
        cin >> start[i];
    for (i = 0; i < y; i++)
        cin >> end[i];

    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    int minimum = INT_MAX;

    for (i = 0; i < n; i++)
    {
        int low = upper_bound(start.begin(), start.end(), arr[i].first) - start.begin() - 1;
        int high = lower_bound(end.begin(), end.end(), arr[i].second) - end.begin();

        if (low >= 0 && low < x && high >= 0 && high < y)
            minimum = min(minimum, end[high] - start[low] + 1);
    }

    cout << minimum;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// typedef long long int lli;

// int main()
// {
//     int n, x, y;
//     cin >> n >> x >> y;

//     vector<pair<lli, lli>> arr(n);
//     vector<lli> v(x);
//     vector<lli> w(y);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i].first;
//         cin >> arr[i].second;
//     }

//     for (int i = 0; i < x; i++)
//     {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     for (int i = 0; i < y; i++)
//     {
//         cin >> w[i];
//     }

//     sort(w.begin(), w.end());

//     lli minTime = -1;

//     vector<lli>::iterator lower, upper;

//     for (int i = 0; i < n; i++)
//     {
//         lli t1 = 0, t2 = 0;
//         bool flag = true;
//         lower = lower_bound(v.begin(), v.end(), arr[i].first);
//         upper = upper_bound(w.begin(), w.end(), arr[i].second);
//         if ((lower - v.begin()) < x)
//         {
//             if (v[lower - v.begin()] == arr[i].first)
//             {
//                 t1 = v[lower - v.begin()];
//             }
//             else
//             {
//                 if ((lower - v.begin()) < 0)
//                 {
//                     flag = false;
//                 }
//                 else
//                 {
//                     t1 = v[lower - v.begin() - 1];
//                 }
//             }
//         }
//         else
//         {
//             t1 = v[lower - v.begin() - 1];
//         }
//         if ((upper - w.begin()) < y)
//         {
//             if (w[upper - w.begin() - 1] == arr[i].second)
//             {
//                 t2 = w[upper - w.begin() - 1];
//             }
//             else
//             {
//                 t2 = w[upper - w.begin()];
//             }
//         }
//         else
//         {
//             if (w[upper - w.begin() - 1] == arr[i].second)
//             {
//                 t2 = w[upper - w.begin() - 1];
//             }
//             else
//             {
//                 flag = false;
//             }
//         }
//         if (flag)
//         {
//             if ((minTime == -1) || (minTime > (t2 - t1 + 1)))
//             {
//                 minTime = t2 - t1 + 1;
//             }
//         }
//     }
//     cout << minTime;
// }