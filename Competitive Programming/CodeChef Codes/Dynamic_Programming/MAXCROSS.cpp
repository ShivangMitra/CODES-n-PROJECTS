#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define endl '\n'
ll n, mx = 1000;
vector<vector<vector<ll>>> b(4, vector<vector<ll>>(mx, vector<ll>(mx)));
vector<string> a(1001);
bool isValid(ll x, ll y)
{

    return (x >= 0 && y >= 0 && y < n && x < n);
}
void direction(ll i, ll j, ll u, ll v, ll dir)
{
    ll ans = 0, x = i, y = j;

    while (isValid(x, y) && a[x][y] == 'X')
    {
        ans++;
        x = x - u;
        y = y - v;
    }
    x = i;
    y = j;
    while (isValid(x, y) && a[x][y] == 'X')
    {
        ans++;
        x = x + u;
        y = y + v;
    }

    x = x - u;
    y = y - v;
    while (isValid(x, y) && a[x][y] == 'X')
    {

        b[dir][x][y] = ans - 1;
        x = x - u;
        y = y - v;
    }

    return;
}
void recur(ll i, ll j, vector<string> &a, vector<vector<ll>> &dp)
{

    if (b[0][i][j] == 0)
    {
        direction(i, j, 1, 0, 0);
    }
    if (b[1][i][j] == 0)
    {

        direction(i, j, 0, 1, 1);
    }
    if (b[2][i][j] == 0)
    {

        direction(i, j, 1, 1, 2);
    }
    if (b[3][i][j] == 0)
    {
        direction(i, j, 1, -1, 3);
    }
    dp[i][j] = max({b[0][i][j], b[1][i][j], b[2][i][j], b[3][i][j]});

    return;
}
int main()
{
    cin >> n;

    vector<vector<ll>> dp(n, vector<ll>(n));

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (a[i][j] == 'X')
            {
                recur(i, j, a, dp);
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}