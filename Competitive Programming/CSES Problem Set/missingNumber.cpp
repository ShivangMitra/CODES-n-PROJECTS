#include <iostream>
using namespace std;

typedef long long l1;

int main(){
    l1 n;
    cin >> n;
    l1 arr[n-1];
    l1 orgSum = 0, userSum = 0;
    for (int i=1;i<=n;i++)
    {
        orgSum += i;
    }
    for (int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        userSum += arr[i];
    }
    cout<<(orgSum - userSum);
}