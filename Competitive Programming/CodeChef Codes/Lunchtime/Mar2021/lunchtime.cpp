#include <iostream>
#include <vector>
#include <stack>
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
        lli n;
        cin >> n;

        vector<lli> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        stack<lli> sk;
        map<lli, lli> p;

        for (int i = 0; i < n; i++)
        {
            if (sk.empty())
            {
                sk.push(arr[i]);
                p[arr[i]] = 0;
            }
            else if (sk.top() == arr[i])
            {
                sk.push(arr[i]);
                p[arr[i]]++;
            }
            else if ((sk.top() != arr[i]) && (arr[i] > sk.top()))
            {
                while ((sk.top() < arr[i]) && (sk.empty() == false))
                {
                    cout << p[sk.top()] << " ";
                    sk.pop();
                }
                if (!sk.empty() && sk.top() == arr[i])
                {
                    sk.push(arr[i]);
                    p[arr[i]]++;
                }
                else if (!sk.empty() && sk.top() != arr[i])
                {
                    sk.push(arr[i]);
                    p[arr[i]] = 0;
                }
            }
            else if ((sk.top() != arr[i]) && (arr[i] < sk.top()))
            {
                sk.push(arr[i]);
                p[arr[i]]++;
            }
        }
        if (!sk.empty())
        {
            while (!sk.empty())
            {
                cout << p[sk.top()] << " ";
                sk.pop();
            }
        }
    }
}