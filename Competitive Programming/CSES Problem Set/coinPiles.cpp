#include<iostream>
using namespace std;

typedef long long int lli;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli tc;
    cin>>tc;

    while(tc--)
    {
        lli p1, p2;
        cin >> p1 >> p2;
        // if((p1 == p2) && ((p1%3==0) && (p2%3==0)))
        // {
        //     cout<<"YES\n";
        // }
        // else{
        //     while((p1>3) && (p2>3)){
        //         p1 = p1-3;
        //         p2 = p2-3;
        //     }
        //     if((p1>p2) && (p1 == (p2 * 2)))
        //     {
        //         cout<<"YES\n";
        //     }
        //     else if((p2>p1) && (p2 == (p1 * 2)))
        //     {
        //         cout<<"YES\n";
        //     }
        //     else
        //     {
        //         cout<<"NO\n";
        //     }
        // }

        cout << ((p1 + p2) % 3 == 0 && (min(p1, p2) * 2 >= max(p1, p2)) ? "YES" : "NO") << "\n";
    }
}