#include<stdio.h>
void main()
{
    int expo1,expo2;
    printf("enter max exponent of first polynomials\n");
    scanf("%d",&expo1);
    printf("enter the max expo of second poly\n");
    scanf("%d",&expo2);
    int poly1[expo1],poly2[expo2];
    printf("enter coeff of first poly starting from lowest exponent\n");
    for(int i=0;i<expo1;i++)
    scanf("%d",&poly1[i]);
    printf("enter coeff of second poly starting from lowest exponent\n");
    for(int i=0;i<expo2;i++)
    scanf("%d",&poly2[i]);
    if(expo1>expo2)
    {
        int poly3[expo1];
        for(int i=0;i<expo1;i++)
        {
            if(i<expo2)
            poly3[i]=poly1[i]+poly2[i];
            else
            {
                poly3[i]=poly1[i];
            }
            
        }
        printf("result \n");
        for(int i=0;i<expo1;i++)
        {
            printf("%d ",poly3[i]);
        }
    }
    else
    {
        int poly3[expo2];
        for(int i=0;i<expo2;i++)
        {
            if(i<expo1)
            poly3[i]=poly1[i]+poly2[i];
            else
            {
                poly3[i]=poly2[i];
            }
            
        }
        printf("result \n");
        for(int i=0;i<expo2;i++)
        {
            printf("%dx^%d ",poly3[i],i);
        }
    }
    
}