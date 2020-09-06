#include<stdio.h>
#include<stdlib.h>

int determinant(int **arr,int size)
{
    int deter=0;
    if(size==2)
    {
        deter=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
        return deter;
    }
    else
    {
        int sign=1;
        int **detmat;
        detmat=(int **)malloc((size-1)*sizeof(int *));
        for(int i=0;i<size-1;i++)
        {
            detmat[i]=(int *)malloc(size*sizeof(int));
        }
        int k;
        for(k=0;k<size;k++);
        {
            int p=0,q=0;
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                {
                    if(i!=0 && j!=k)
                    {
                        detmat[p][q]=arr[i][j];
                        if(q<size-1)
                        q++;
                        else if(q==size-1)
                        {
                            p++;
                            q=0;
                        }
                    }
                }
            }

            deter=deter+sign*(arr[0][k]*determinant(detmat,(size-1)));
            sign=sign*-1;

        }
    }
    return deter;
}

void main()
{
    int n;
    printf("Enter size of your matrix\n");
    scanf("%d",&n);
    int **arr;
    arr=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    {
        arr[i]=(int *)malloc(n*sizeof(int));
    }
    printf("Enter the values of your Matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }

    printf("the determinant of your matrix is\n");
    printf("%d",determinant(arr,n));
}