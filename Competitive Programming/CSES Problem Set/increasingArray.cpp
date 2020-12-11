#include<iostream>
using namespace std;

typedef long long lg;

int main(){
    lg n;
    cin>>n;
    lg arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    lg turns = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1] > arr[i])
        {
            turns += (arr[i-1]-arr[i]);
            arr[i] = arr[i] + (arr[i-1]-arr[i]);
        }
    }
    cout<<turns;
}