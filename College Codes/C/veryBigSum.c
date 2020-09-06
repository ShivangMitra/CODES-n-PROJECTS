#include<stdio.h>
long long int big(int ar[]);
int n;
int main()
{
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%lld",big(arr));
}
long long int big(int ar[])
{
    long long int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+ar[i];
    return sum;
}