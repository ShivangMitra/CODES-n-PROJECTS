#include<iostream>
#include<algorithm>
using namespace std;

int cnt = 0;
bool chk[26];
string s, ans = "";

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>s;

    for(char &c : s){
        if(!chk[c - 'A'])
        {
            chk[c - 'A'] = true;
            cnt++;
        }
        else
        {
            ans += c;
            chk[c - 'A'] =false;
            cnt--;
        }
    }
    if(cnt >= 2)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    cout << ans;
    for(char c = 'A'; c <= 'Z'; c++)
    {
        if(chk[c - 'A'])
        {
            cout<<c;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
    return 0;
}