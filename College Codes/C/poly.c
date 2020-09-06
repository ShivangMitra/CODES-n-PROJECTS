#include<stdio.h>
#define max 10
void main()
{
 typedef struct 
{
    int coeff[max];
    int expo;
}poly;

poly p[2];
int c,x=0;
while(x==0)
{
printf("\nenter 1 to insert the values coefficents and exponets for two polynomials \nenter 2 to display the values of two polynomials \nenter 3 to add the two polynomials \nEnter 4 to multiply the two polynomials \nEnter 5 to exit the program:");
scanf("%d",&c);
if(c==5)
{
    return;
}
switch(c)
{
    case 1: 
            printf("\nenter the Max degree of the first polynomial:");
            scanf("%d",&p[0].expo);
            if(p[0].expo>max)
            {
                printf("\nthe exponent is out of array range");
                break;
            }
            for(int i=0;i<=p[0].expo;i++)
            { printf("\n Enter the coefficents of %d exponent:",i);
              scanf("%d",&p[0].coeff[i]);
            }
            printf("\nenter the Max degree of the Second polynomial:");
            scanf("%d",&p[1].expo);
            if(p[1].expo>max)
            {
                printf("\nthe exponent is out of array range");
                break;
            }
            for(int i=0;i<=p[1].expo;i++)
            {
             printf("\n Enter the coefficents of %d exponent:",i);
             scanf("%d",&p[1].coeff[i]);
            }
            printf("\n");
            break;
    case 2:
            printf("\nThe first polynomial is:\n");
            {
              for(int i=p[0].expo;i>=0;i--)
              printf("%dx^%d ",p[0].coeff[i],i);
            }
             printf("\nThe Second polynomial is:\n");
            {
              for(int i=p[1].expo;i>=0;i--)
              printf("%dx^%d ",p[1].coeff[i],i);
            }
            printf("\n");
            break;
    case 3: if(p[0].expo>p[1].expo)
            {
                p[2].expo=p[0].expo;
            }
            else
            {
                p[2].expo=p[1].expo;
            }
            for(int i=p[2].expo;i>=0;i--)
            {
                p[2].coeff[i]=p[0].coeff[i]+p[1].coeff[i];
            }
            printf("\nThe addition of the two polynomials are:\n");
            {
              for(int i=p[2].expo;i>=0;i--)
              printf("%dx^%d ",p[2].coeff[i],i);
            }
            printf("\n");
            break;
    case 4: p[2].expo=p[0].expo+p[1].expo;
            if(p[2].expo>max)
            {
                printf("\nthe exponent is out of array range");
                break;
            }
            for(int i=0;i<p[0].expo;i++)
            {
                for(int j=0;j<p[1].expo;j++)
                {
                    p[2].coeff[i+j] += p[0].coeff[i]*p[1].coeff[j];
                }
            }
            printf("\nThe Multiplication of the two polynomials are:\n");
            {
              for(int i=p[2].expo;i>=0;i--)
              printf("%dx^%d ",p[2].coeff[i],i);
            }  
            printf("\n");
            break;
     default:printf("Wrong Choice");
 }
}
}