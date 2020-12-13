#include<stdio.h>

void miniMaxSum(long arr[]);

int main()
{
    long arr[5];
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);

    miniMaxSum(arr);
    return 0;
}

void miniMaxSum(long arr[])
{
    long minSum=0,maxSum=0;
    long min=arr[0],max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(min>arr[i])
        min=arr[i];
        maxSum=maxSum+arr[i];
        if(max<arr[i])
        max=arr[i];
        minSum=minSum+arr[i];
    }
    maxSum=maxSum-min;
    minSum=minSum-max;
    printf("%ld %ld",minSum,maxSum);
}