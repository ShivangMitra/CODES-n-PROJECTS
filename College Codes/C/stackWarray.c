#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5

int stack[MAX];
int t=-1;
void push(int element);
int pop();
void peep();

void main()
{
    int choice, num1=0, num2=0;
    while(1)
    {
        printf("\n\t\tMenu");
        printf("\n[1]Using Push");
        printf("\n[2]Using Pop");
        printf("\n[3]Element at the top of the Stack");
        printf("\n[4]Exit\n");
        fflush(stdin);
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                    printf("\n\tEnter the element: ");
                    scanf("%d",&num1);
                    push(num1);
                    break;

            case 2:
                    num2=pop();
                    printf("\n\tElement poped: %d\n\t", num2);
                    getch();
                    break;

            case 3:
                    peep();
                    getch();
                    break;

            default:
                    printf("\nINVALID CHOICE\n");
                    break;
        }
    }
}

void push(int element)
{
    if(t==MAX-1)
    {
        printf("Stack is full\n");
        getch();
    }
    else if(t==-1)
    {
        stack[++t]=element;
    }
    else
    {
        int temp=0, nakli;
        for(int i=0;i<=t;i++)
        {
            if(stack[i]>=temp)
            temp++;
            else
            {
                nakli = stack[i];
                stack[i] = element;
                break;
            }
        }
        int f;
        for(int i=temp+1; i<MAX; i++)
        {
            f = stack[i];
            stack[i] = nakli;
            nakli = f;
        }
    }
    
}

int pop()
{
    int element;
    if(t==-1)
    {
        printf("\n\tStack is empty\n");
        getch();
        exit(1);
    }
    return(stack[t--]);
}

void peep()
{
    if(t==-1)
    {
        printf("\nUNDER FLOW");
        return;
    }
    printf("\nElement at the top of the stack = %d",stack[t]);
}