#include<iostream>
using namespace std;

int main()
{
    int n,sml,lrg;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter numbers";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sml=arr[0];
    lrg=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>lrg)
        lrg=arr[i];
        if(arr[i]<sml)
        sml=arr[i];
    }
    cout<<"largest "<<lrg<<endl;
    cout<<"smallest "<<sml<<endl;
}