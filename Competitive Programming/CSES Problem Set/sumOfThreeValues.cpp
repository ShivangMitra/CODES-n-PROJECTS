#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, l, n, x, y, z;
    cin >> n >> x;
    vector<tuple<int, int>> a(n);
    for(int i=0;i<n;i++){
        cin >> y;
        a[i] = {y, i+1};
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n-2;i++){
        tie(k, y) = a[i];
        if( k >= x) break;
        for(int j=i+1;j<n-1;j++){
            tie(l, z) = a[j];
            if(k + 1 >= x) break;
            auto it = lower_bound(&a[j+1], &a[n], make_tuple(x - (k + l), 0));
            if(k + l + get<0>(*it) != x) continue;
            cout << y << " " << z << " " << get<1>(*it);
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
}