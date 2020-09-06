#include<stdio.h>
int n;
int suma(int ar[]);
int suma(int ar[])
{
    int s=0;
    for(int i=0;i<n;i++)
    s=s+ar[i];
    return s;
}
void main()
{
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",suma(arr));
}
