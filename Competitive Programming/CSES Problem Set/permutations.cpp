#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

typedef long long lg;

void print_permutations(lg arr[], int n){
    bool noSolu = true;
    do{
        bool flag = true;
        for(int i=1;i<n;i++){
            if((abs(arr[i]-arr[i-1])) == 1)
            {
                flag = false;
                break;
            }
        }
        if(flag){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            noSolu = false;
            break;
        }
    }while(next_permutation(arr, arr+n));
    if(noSolu){
        cout<<"NO SOLUTION";
    }
    
}

int main(){
    lg n;
    cin>>n;
    lg arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = i+1;
    }
    print_permutations(arr, n);
}