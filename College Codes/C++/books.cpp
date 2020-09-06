#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    string author[n],title[n];
    double price[n];
    cout<<"enter author title price of each book respectively"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>author[i]>>title[i]>>price[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<author[i]<<"  "<<title[i]<<"  "<<price[i]<<endl;
    }
    return 0;
}