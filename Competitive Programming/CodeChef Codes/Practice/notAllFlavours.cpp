#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> flavour(n);
        for (int i = 0; i < n; i++)
            cin >> flavour[i];
        vector<pair<int, int>> flav_shrink;
        flav_shrink.push_back({flavour[0], 1});
        for (int i = 1; i < n; i++)
        {
            if (flavour[i] == flav_shrink.back().first)
                flav_shrink.back().second++;
            else
                flav_shrink.push_back({flavour[i], 1});
        }
        int start = 0, flav_count = 1;
        int len = flav_shrink[0].second, max_len = len;
        vector<int> taken(k, 0);
        taken[flav_shrink[start].first - 1] = 1;
        int i = 1;
        while (i < flav_shrink.size())
        {
            taken[flav_shrink[i].first - 1]++;
            if (taken[flav_shrink[i].first - 1] == 1)
                flav_count++;
            if (flav_count == k)
            {
                max_len = max(max_len, len);
                while (true)
                {
                    taken[flav_shrink[start].first - 1]--;
                    len -= flav_shrink[start].second;
                    start++;
                    if (taken[flav_shrink[start - 1].first - 1] > 0)
                        continue;
                    flav_count--;
                    break;
                }
            }
            len += flav_shrink[i].second;
            i++;
        }
        if (flav_count == k)
            len -= flav_shrink[i - 1].second;
        max_len = max(max_len, len);
        cout << max_len << endl;
    }
    return 0;
}
// #include <iostream>
// #include <queue>
// #include <vector>

// using namespace std;

// typedef long long int lli;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     lli t;
//     cin >> t;

//     while (t--)
//     {
//         lli n, k;
//         cin >> n >> k;

//         queue<lli> q;

//         vector<lli> arr(k);

//         lli unique = 0;

//         lli max = -1;

//         for (int i = 0; i < n; i++)
//         {
//             lli temp;
//             cin >> temp;
//             if ((arr[temp - 1] == 0) && (unique == (k - 1)))
//             {
//                 if (q.size() > max)
//                 {
//                     max = q.size();
//                 }
//                 while (arr[q.front() - 1] != 1)
//                 {
//                     arr[q.front() - 1] = arr[q.front() - 1] - 1;
//                     q.pop();
//                 }
//                 if (arr[q.front() - 1] == 1)
//                 {
//                     arr[q.front() - 1] = arr[q.front() - 1] - 1;
//                     q.pop();
//                     q.push(temp);
//                     arr[temp - 1] = arr[temp - 1] + 1;
//                 }
//             }
//             else if ((arr[temp - 1] == 0) && (unique < k))
//             {
//                 unique++;
//                 q.push(temp);
//                 arr[temp - 1] = arr[temp - 1] + 1;
//             }
//             else if (unique < k)
//             {
//                 q.push(temp);
//                 arr[temp - 1] = arr[temp - 1] + 1;
//             }
//         }
//         if (max == -1)
//         {
//             max = q.size();
//         }
//         if (max < q.size())
//         {
//             max = q.size();
//         }
//         cout << max << "\n";
//     }
// }