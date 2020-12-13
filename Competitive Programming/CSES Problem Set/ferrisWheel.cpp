#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> wt(n);
    for(int i=0;i<n;i++)
    {
        cin >> wt[i];
    }

    sort(wt.begin(), wt.end());
    int counter = 0;

    int maxwt = 0;

    for(int i=0;i<n;i++)
    {
        maxwt += wt[i];
        if(maxwt > x)
        {
            counter++;
            maxwt = wt[i];
        }
    }
    counter++;
    cout<<counter;
}