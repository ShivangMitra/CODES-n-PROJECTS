// #include <iostream>
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
//         lli n;
//         cin >> n;
//         vector<lli> arr(n);
//         lli sum = 0, setSum = 0;
//         for (lli i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             sum += arr[i];
//             setSum += n;
//         }
//         lli diff = setSum - sum;
//         if (diff % 2 == 0)
//         {
//             cout << "Second"
//                  << "\n";
//         }
//         else
//         {
//             cout << "First"
//                  << "\n";
//         }
//     }
// }
#include <iostream>
#include <vector>
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
        lli n;
        cin >> n;
        vector<lli> arr(n);
        lli sum = 0, setSum = 0;
        for (lli i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            setSum += i + 1;
        }
        lli diff = setSum - sum;
        if (diff <= 0)
        {
            cout << "Second"
                 << "\n";
        }
        else
        {
            if (diff % 2 == 0)
            {
                cout << "Second"
                     << "\n";
            }
            else
            {
                cout << "First"
                     << "\n";
            }
        }
    }
}