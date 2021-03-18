#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
#define ll long long
#define ld long double
#define pb push_back
#define mod 1000000007

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    f(i, 0, n) cin >> arr[i];

    ll prod = 1;
    stack<int> s;
    s.push(n - 1);

    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
            s.pop();
        if (!s.empty())
            prod = (prod * (s.top() - i + 1)) % mod;
        s.push(i);
    }

    cout << prod << endl;
}