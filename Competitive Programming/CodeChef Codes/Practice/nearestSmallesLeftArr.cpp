#include <iostream>
#include <vector>
#include <stack>

typedef long long int lli;

using namespace std;

int main()
{
    lli n;
    cin >> n;
    vector<lli> arr(n);
    stack<lli> S;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        while (!S.empty() && S.top() >= arr[i])
            S.pop();

        if (S.empty())
            cout << -1 << " ";
        else
            cout << S.top() << " ";

        S.push(arr[i]);
    }
}