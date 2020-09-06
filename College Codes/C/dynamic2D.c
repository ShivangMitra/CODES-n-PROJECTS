#include<stdio.h>
#include<stdlib.h>

void main()
{
    int r,c;
    printf("enter row and column\n");
    scanf("%d%d",&r,&c);

    int *arr=(int *)malloc(r*c*sizeof(int));
    int i,j,count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("element [%d][%d]: ",i+1,j+1);
            scanf("%d",(arr + i*c + j));
        }
    }
    printf("the elements of matrix are\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i<=j)
            printf("%d\t",*(arr + i*c + j));
            else
            printf("\t");
        }
        printf("\n");
    }
}