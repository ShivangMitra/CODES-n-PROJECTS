#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int info;
    struct node *next;
};

typedef struct node node;
node *start1=NULL;
node *start2=NULL;

void create(node *start,int listNumber)
{
    int op;
    node *pre,*temp;
    start = (node*)malloc(sizeof(node));
    if(listNumber==1)
    {
        start1=start;
    }
    else if(listNumber==2)
    {
        start2=start;
    }
    start->next=NULL;
    printf("enter information\n");
    scanf("%d",&start->info);
    printf("enter 1 to create another node\n");
    scanf("%d",&op);
    pre=start;
    while(op==1)
    {
        temp=(node*)malloc(sizeof(node));
        printf("enter info\n");
        scanf("%d",&temp->info);
        temp->next=NULL;
        pre->next=temp;
        pre=pre->next;
        printf("enter 1 to create another node\n");
        scanf("%d",&op);
    }
}

void display(node *start)
{
    node *ptr;
    if(start==NULL)
    {
        printf("list is empty\n");
        getch();
    }
    else
    {
        ptr=start;
        printf("the elements in the linked list are: \n");
        while(ptr!=NULL)
        {
            printf("%d ",ptr->info);
            ptr=ptr->next;
        }
    }
}

void swap()
{
    node *tempo;
    tempo=start1;
    start1=start2;
    start2=tempo;
}

void main()
{
    int listNumber=0;
    printf("create ur first list\n");
    listNumber++;
    create(start1,listNumber);
    printf("create ur second list\n");
    listNumber++;
    create(start2,listNumber);
    display(start1);
    printf("\n");
    display(start2);
    printf("\n");
    
    swap();
    printf("the swaped lists are\n");
    display(start1);
    printf("\n");
    display(start2);
    printf("\n");
}