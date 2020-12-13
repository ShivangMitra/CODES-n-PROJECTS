#include<iostream>
#include<set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ele;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        s.insert(ele);
    }
    cout<<s.size();
}