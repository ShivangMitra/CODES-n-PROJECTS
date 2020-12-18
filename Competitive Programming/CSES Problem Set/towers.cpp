#include<iostream>
#include<set>

using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie();
    int n, x;
    cin >> n;
    multiset<int> s;
    while(n--)
    {
        cin >> x;
        auto it = s.lower_bound(x + 1);
        if(it == s.end()) s.insert(x);
        else{
            s.erase(it);
            s.insert(x);
        }
    }
    cout << s.size();
}