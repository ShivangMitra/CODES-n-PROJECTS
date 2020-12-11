#include<iostream>
#define lli long long int

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    lli x, y;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y;
        if(x<y)
        {
            if(y%2 == 1)
            {
                cout<<(y * y) - x + 1 << "\n";
            }
            else
            {
                cout<<((y-1) * (y-1) + 1) + x - 1 << "\n";
            }
        }
        else
        {
            if(x%2 == 0)
            {
                cout<<(x * x) - y + 1 << "\n";
            }
            else
            {
                cout<<((x-1) * (x-1) + 1) + y - 1 << "\n";
            }
        }
        
    }
}