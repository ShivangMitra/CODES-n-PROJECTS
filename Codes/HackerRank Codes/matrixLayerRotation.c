#include<stdio.h>
#include<stdlib.h>
int matrixRotation(int *p,int r);

int n,m;

int main()
{
    int r;
    scanf("%d%d%d",&n,&m,&r);
    int *arr;
    arr =(int *)malloc(n*m*sizeof(int));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",((arr+i*n)+j));
    }
    matrixRotation(arr,r);
    return 0;
}

int matrixRotation(int *p,int r)
{
    int newarray[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        newarray[i][j]=-999;
    }
    int r1=0,r2=0,col1=m-1,col2=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a=i,b=j;
            for(int k=0;k<r;k++)
            {
                if(b>r1 && b<col1 && i<n/2)
                {
                    b--;
                }
                else if(b>r1 && b<col1 && i>n/2)
                {
                    b++;
                }
                else if(b==r1 && a>r2 && a<col2 && b<m/2)
                {
                    a++;
                }
                else if(b==col1 && a>r2 && a<col2 && b>m/2)
                {
                    a--;
                }
                else if(j<r1)
                {
                    a++;
                }
                else if(j>col1)
                {
                    a--;
                }
                else if(j==r1 && i>n/2)
                {
                    b++;
                }
                else if(j==col1 && i>n/2)
                {
                    a--;
                }
                else if(j==col1 && i<n/2)
                {
                    b--;
                }
                else if(j==r1 && i<n/2)
                {
                    a++;
                }
            }
            newarray[a][b]=*((p+i*n)+j);
            printf("val at %d,%d is %d    ",a,b,newarray[a][b]);
        }
        if(r1<((n/2)-1) && r2<m/2)
        {
            r1++;
            r2++;
            col1--;
            col2--;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d ",newarray[i][j]);
        printf("\n");
    }
}