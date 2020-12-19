#include<iostream>
#include<vector>
#include<tuple>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y;
    cin >> n;
    vector<int> a(n);
    vector<tuple<int, int>> b;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
    {
        while(!b.empty())
        {
            tie(x, y) = b.back();
            if(y < a[i]) break;
            b.pop_back();
        }
        if(b.empty()) x = 0;
        cout << x << " \n"[i == n-1];
        b.push_back({i+1, a[i]});
    }   
}
