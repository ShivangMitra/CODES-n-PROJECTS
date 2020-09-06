#include<stdio.h>
void main()
{
    int ex1,ex2,ex3;
    printf("enter highest expo of first polynomial");
    scanf("%d",&ex1);
    printf("enter highest expo of second polynomial");
    scanf("%d",&ex2);
    int p1[ex1+1],p2[ex2+1];
    ex3=ex1+ex2+1;
    int p3[ex3];
    printf("enter poly 1");
    for(int i=0;i<=ex1;i++)
    {
        scanf("%d",&p1[i]);
    }
    printf("enter poly 2");
    for(int i=0;i<=ex2;i++)
    {
        scanf("%d",&p2[i]);
    }
    for(int i=0;i<ex3;i++)
    {
        p3[i]=0;
    }
    for(int i=0;i<=ex1;i++)
    {
        for(int j=0;j<=ex2;j++)
        {
            p3[i+j]+=(p1[i]*p2[j]);
        }
    }
    for(int i=0;i<ex3;i++)
    {
        printf("%dx^%d",p3[i],i);
        printf("\n");
    }
}