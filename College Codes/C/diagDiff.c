#include<stdio.h>
#include<stdlib.h>
int diag(int *p);
int n;
int main()
{
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("%d",diag((int *)a));
    return 0;
}

int diag(int *p)
{
    int d1=0,d2=0,s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            d1=d1+*((p+i*n)+j);
            if((i+j)==(n-1))
            d2=d2+*((p+i*n)+j);
        }
    }
    s=abs(d1-d2);
    return s;
}