#include<stdio.h>
#include<stdlib.h>
int n,m;
int* climbingLeaderboard(int *scores, int *alice);
int main()
{
    scanf("%d",&n);
    int *scores;
    scores=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }
    scanf("%d",&m);
    int *alice;
    alice=(int *)malloc(m*sizeof(int));
    for(int i=0;i<m;i++)
    {
        scanf("%d",&alice[i]);
    }
    int *p;
    p = climbingLeaderboard(scores, alice);
    for(int i=0;i<m;i++)
    printf("%d\n",*(p+i));
    return 0;
}
int* climbingLeaderboard(int *scores, int *alice)
{
    int *res;
    res=(int*)malloc(m*sizeof(int));
    for(int i=0;i<m;i++)
    {
        int pos=1;
        for(int j=0;j<n;j++)
        {
            if(scores[j]!=scores[j-1] && j!=0)
            pos++;
            if(alice[i]>=scores[j])
            break;
            if(j==(n-1))
            pos++;
        }
        res[i]=pos;
    }
    return res;
}
