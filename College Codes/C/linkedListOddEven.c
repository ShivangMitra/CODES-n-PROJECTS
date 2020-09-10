#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int info;
    struct node *next;
};

typedef struct node node;
node *start=NULL;
int k,l;

void create()
{
    int op;
    node *pre,*temp;
    start = (node*)malloc(sizeof(node));
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

void display()
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

void modify()
{
    node *temp;
    temp=start;
    while(temp != NULL)
    {
        if(((temp->info)%2) == 0)
        {
            temp->info=(temp->info)-l;
        }
        else
        {
            temp->info=(temp->info)+k;
        }

        temp=temp->next;
        
    }
}

void main()
{
    printf("create ur list\n");
    create();
    display();
    printf("\n");
    printf("enter the val of K ");
    scanf("%d",&k);
    printf("enter the val of L ");
    scanf("%d",&l);

    modify();
    display();
    
}