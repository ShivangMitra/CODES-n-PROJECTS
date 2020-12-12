#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
using namespace std;

typedef long long lg;

void print_palin(string a, int l, int r){
    if(l==r)
    {
        bool flag = true;
        for(int i=0,j=r ; i<=r,j>0 ; i++,j--)
        {
            if(a[i] != a[j])
            flag = false;
        }
        if(flag)
        {
            cout<<a<<"\n";
            abort();
        }
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
}