#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

typedef long long int lli;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n, m, curr, ticket;

    cin >> n >> m;
    multiset<lli, greater<int>> tickets;

    while(n--)
    {
        cin >> ticket;
        tickets.insert(ticket);
    }
    while(m--)
    {
        cin >> curr;
        auto it = tickets.lower_bound(curr);
        if(it == tickets.end())
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << *it << "\n";
            tickets.erase(it);
        }
    }
}