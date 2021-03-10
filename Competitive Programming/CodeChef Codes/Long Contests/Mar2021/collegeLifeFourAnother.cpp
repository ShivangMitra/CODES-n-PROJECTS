#include <iostream>
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
        lli n, e, h, a, b, c;
        cin >> n >> e >> h >> a >> b >> c;

        lli minp = INT64_MAX;
        lli cnt = 0, ck = 0;

        for (lli k = 0; k <= min(e, h); k++)
        {
            for (lli i = 0; i <= e - k; i += 2)
            {
                for (lli j = 0; j <= h - k; j += 3)
                {
                    cnt += k + i / 2 + j / 3;
                    if (cnt >= n)
                    {
                        minp = min(minp, k * c + a * i / 2 + b * j / 3);
                        ck = cnt;
                    }
                    cnt = 0;
                }
            }
        }
        if (ck < n)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << minp << "\n";
        }
    }
    return 0;
}
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// typedef long long int lli;

// lli minp;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     lli t;
//     cin >> t;

//     while (t--)
//     {
//         lli n, e, h, a, b, c;
//         cin >> n >> e >> h >> a >> b >> c;

//         lli fst;

//         lli sec = 0;

//         a=0
//         while(a<e/2){
//             b=n-c,c=0
//             while(b>=0 && c<=n){
//                 if(not in table)
//                 {
//calc sum and put in table
//check for min
//                 }
//                 c++;
//             }
//             a++;
//         }
//     }
// }