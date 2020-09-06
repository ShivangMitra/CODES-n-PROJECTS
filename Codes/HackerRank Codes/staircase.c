#include<stdio.h>

void staircase(int n);

void main()
{
    int n;
    scanf("%d",&n);
    staircase(n);
}

void staircase(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=i;k<n-1;k++)
        printf(" ");
        for(int j=0;j<=i;j++)
        printf("#");
        printf("\n");
    }
}