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
    int pos=1;
    for(int i=0;i<n;i++)
    {
        if(scores[i]!=scores[i+1])
        pos++;
    }

    int *res;
    int p=n-1;
    res=(int*)malloc(m*sizeof(int));
    for(int i=0;i<m;i++)
    {
        for(int j=p;j>=0;j--)
        {
            if(pos==1)
            {
                break;
            }
            else if(alice[i]<scores[j])
            {
                p=j;
                break;
            }
            else if(alice[i]==scores[j])
            {
                p=j;
                pos--;
                break;
            }
            else if((j==(n-1)) || (scores[j]!=scores[j-1]))
            {
                pos--;
            }
        }
        res[i]=pos;
    }
    return res;
}