#include <iostream>
#include <set>
using namespace std;

set<int> s;
int pos(int a)
{
    auto it = s.lower_bound(a);
    if (s.count(a))
        return *it;

    else
    {
        it--;
        return *it;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        int j = i;
        s.insert(j);
        while (arr[j + 1] % arr[j] == 0)
            j++;
        i = j;
    }

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int a, b;
            cin >> a >> b;
            a--;
            arr[a] = b;

            if (a != n - 1)
            {
                if (arr[a + 1] % arr[a] == 0 && pos(a) != pos(a + 1))
                {
                    s.erase(s.find(pos(a + 1)));
                }
                else if (arr[a + 1] % arr[a] != 0 && pos(a) == pos(a + 1))
                {
                    s.insert(a + 1);
                }
            }
            if (a != 0)
            {
                if (arr[a] % arr[a - 1] == 0 && pos(a) != pos(a - 1))
                {
                    s.erase(s.find(pos(a)));
                }
                else if (arr[a] % arr[a - 1] != 0 && pos(a) == pos(a - 1))
                {
                    s.insert(a);
                }
            }
        }
        if (type == 2)
        {
            int a;
            cin >> a;
            a--;
            cout << *s.lower_bound(pos(a)) + 1 << "\n";
        }
    }
}

// #include <iostream>
// #include <vector>
// using namespace std;

// typedef long long int lli;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     lli n, q;

//     cin >> n >> q;

//     vector<lli> arr(n);
//     vector<lli> ans;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     vector<lli> s;

//     lli index = 1;

//     s.push_back(index);

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] % arr[i - 1] == 0)
//         {
//             s.push_back(index);
//         }
//         else
//         {
//             index++;
//             s.push_back(index);
//         }
//     }

//     while (q--)
//     {
//         lli type;
//         cin >> type;
//         if (type == 1)
//         {
//             lli x, y;
//             cin >> x >> y;
//             arr[x - 1] = y;

//             s.clear();

//             index = 1;

//             s.push_back(index);

//             for (int i = 1; i < n; i++)
//             {
//                 if (arr[i] % arr[i - 1] == 0)
//                 {
//                     s.push_back(index);
//                 }
//                 else
//                 {
//                     index++;
//                     s.push_back(index);
//                 }
//             }
//         }
//         else
//         {
//             lli p;
//             cin >> p;
//             for (int i = 0; i < s.size(); i++)
//             {
//                 if (s[p - 1] == s[i])
//                 {
//                     ans.push_back(i + 1);
//                     break;
//                 }
//             }
//         }
//     }
//     for (auto ele : ans)
//     {
//         cout << ele << "\n";
//     }
// }