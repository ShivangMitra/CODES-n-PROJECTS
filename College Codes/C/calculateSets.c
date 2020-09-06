#include<stdio.h>
#include<stdlib.h>

void uniset(int *a, int *b);
void intset(int *a, int *b);
void anotb(int *a, int *b);

int n,m;

void main()
{
    printf("enter the size of 1st set\n");
    scanf("%d",&n);

    int *a;
    a=(int *)malloc(n*sizeof(int));

    printf("enter the vals of your set\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter the size of 2nd set\n");
    scanf("%d",&m);

    int *b;
    b=(int *)malloc(m*sizeof(int));

    printf("enter the vals of your set\n");
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);

    printf("the union of the sets is\n");
    uniset(a,b);
    printf("\n");
    printf("the intersection of the sets is\n");
    intset(a,b);
    printf("\n");
    printf("the A-B of the sets is\n");
    anotb(a,b);
    printf("\n");
    
}

void uniset(int *a, int *b)
{
    int *uni;
    uni=(int *)malloc((n+m)*sizeof(int));

    for(int i=0;i<m;i++)
    {
        if(i<n)
        {
            uni[i]=a[i];
            uni[i+n]=b[i];
        }
        else
        {
            uni[i+n]=b[i];
        }
    }

    int size=n+m;

    for (int i = 0; i < size; i++) 
   {
      for (int j = i + 1; j < size;) 
      {
        if (uni[j] == uni[i]) 
        {
            for (int k = j; k < size; k++) 
            {
               uni[k] = uni[k + 1];
            }
            size--;
         } 
        else
        j++;
      }
   }
    for(int i=0;i<size;i++)
    printf("%d ",uni[i]);
}
void intset(int *a, int *b)
{
    int *insec;
    int k=0;
    if(a<b)
    {
        insec=(int *)malloc(n*sizeof(int));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    insec[k]=a[i];
                    k++;
                }
            }
        }
    }
    else
    {
        insec=(int *)malloc(m*sizeof(int));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    insec[k]=a[i];
                    k++;
                }
            }
        }
    }

    for(int i=0;i<k;i++)
    printf("%d ",insec[i]);
    
}
void anotb(int *a, int *b)
{
    int *antb;
    int k=0;
    antb=(int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        int check=0;
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            antb[k]=a[i];
            k++;
        }
    }

    for(int i=0;i<k;i++)
    printf("%d ",antb[i]);
}