#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> peep(n);
    vector<int> apps(m);

    for(int i=0;i<n;i++)
    {
        cin>>peep[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>apps[i];
    }
    sort(peep.begin(), peep.end());
    sort(apps.begin(), apps.end());
    int ans = 0;
    int i = 0, j = 0;
    while(i<n && j<m)
    {
        if(abs(peep[i]-apps[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else if(peep[i] < apps[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<ans;
}