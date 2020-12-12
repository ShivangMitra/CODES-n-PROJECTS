#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<set>
using namespace std;

typedef long long lg;

set<string> perms;

void print_palin(string a, int l, int r){
    if(l==r)
    {
        for(int i=0;i<=r;i++)
        perms.insert(a);
    }
    else{
        for(int i=l;i<=r;i++){
            swap(a[l], a[i]);
            print_palin(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

int main(){
    string palin;
    cin>>palin;
    lg n = palin.size();
    print_palin(palin, 0, n-1);
    cout<<perms.size()<<"\n";
    for(auto ele : perms)
    {
        cout<<ele<<"\n";
    }
}