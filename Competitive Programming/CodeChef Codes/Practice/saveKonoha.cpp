#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    ios::sync_with_stdio(0);
    cin.tie(0);
    //Power is denoted by p
    int t;
    cin >> t;
    while (t--)
    {
        int pPain, total_sol;
        cin >> total_sol >> pPain;
        priority_queue<int> sol;
        int power;
        for (int i = 0; i < total_sol; i++)
        {
            cin >> power;
            sol.push(power);
        }

        int count = 0;
        while (sol.top() > 0 && pPain > 0)
        {
            pPain -= sol.top();
            sol.push(floor(sol.top() / 2));
            sol.pop();
            count++;
        }
        if (pPain > 0)
        {
            printf("Evacuate\n");
        }
        else
        {
            printf("%d\n", count);
        }
    }

    return 0;
}

// #include <iostream>
// #include <queue>
// #include <math.h>
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
//         lli n, z;
//         cin >> n >> z;

//         priority_queue<lli> arr;

//         for (int i = 0; i < n; i++)
//         {
//             lli temp;
//             cin >> temp;
//             arr.push(temp);
//         }

//         lli min = 0, s;
//         s = n;

//         while ((arr.top() > 0) && (z > 0))
//         {
//             z = z - arr.top();
//             lli temp;
//             temp = floor(arr.top() / 2);
//             arr.pop();
//             arr.push(temp);
//             min++;
//         }
//         if (z > 0)
//         {
//             cout << "Evacuate";
//         }
//         else
//         {
//             cout << min;
//         }
//     }
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
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
//         lli n, z;
//         cin >> n >> z;

//         vector<lli> arr(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         lli min = 0, s;
//         s = n;

//         while ((z > 0) && (s > 0))
//         {
//             sort(arr.begin(), arr.end());
//             z = z - arr[arr.size() - 1];
//             arr[arr.size() - 1] = arr[arr.size() - 1] / 2;
//             if (arr[arr.size() - 1] == 0)
//             {
//                 s--;
//             }
//             min++;
//         }
//         if (z > 0)
//         {
//             cout << "Evacuate";
//         }
//         else
//         {
//             cout << min;
//         }
//     }
// }

// 1
// 5 25
// 7 13 8 17 3