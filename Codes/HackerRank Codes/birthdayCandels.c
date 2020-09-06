#include<stdio.h>

int birthdayCakeCandels(int ar[]);
int n;
void main()
{
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);

    printf("%d",birthdayCakeCandels(ar));
}

int birthdayCakeCandels(int ar[])
{
    int blow=0;
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
            blow=0;
            blow++;
        }
        else if(max==ar[i])
        {
            blow++;
        }
    }
    return blow;
}