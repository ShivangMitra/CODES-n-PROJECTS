#include<stdio.h>
#include<stdlib.h>
int *com(int a[], int b[]);
int main()
{
    int aa[3],bb[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&aa[i]);
        if(aa[i]<1 || aa[i]>100)
        {
            printf("INVALID SCORE INPUT");
            exit(0);
        }
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&bb[i]);
        if(bb[i]<1 || bb[i]>100)
        {
            printf("INVALID SCORE INPUT");
            exit(0);
        }
    }
    int *p = com(aa,bb);
    for(int i=0;i<2;i++)
    printf("%d ",*(p+i));
    return 0;
}

int *com(int a[], int b[])
{
    static int points[2];
    for(int i=0;i<2;i++)
    points[i]=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        points[0]=points[0]+1;
        else if(a[i]<b[i])
        points[1]=points[1]+1;
    }
    return points;
}