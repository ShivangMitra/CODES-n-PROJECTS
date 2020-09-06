#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>

struct node
{
    int info;
    struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
int no=0;
void create();
void display();
void insert_begin();
void insert_end();
void insert_sloc();

void main()
{
    int ch;
    create();
    printf("Linked List Menu\n");
    printf("1. Insert at begining\n");
    printf("2. Insert at the end\n");
    printf("3.Inset at a specific position\n");
    printf("4. Display\n");

    while(1)
    {
        printf("enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                insert_begin();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_sloc();
            case 4:
                display();
                break;
            default:
                printf("\n INVALID CHOICE \n");
        }
    }getch();
}

void create()
{
    int op;
    NODE *pre,*temp;
    start = (NODE*)malloc(sizeof(NODE));
    start->next=NULL;
    printf("enter information");
    scanf("%d",&start->info);
    no++;
    printf("enter 1 to create another node");
    scanf("%d",&op);
    pre=start;
    while(op==1)
    {
        temp=(NODE*)malloc(sizeof(NODE));
        printf("enter info");
        scanf("%d",&temp->info);
        temp->next=NULL;
        pre->next=temp;
        pre=pre->next;
        no++;
        printf("enter 1 to create another node");
        scanf("%d",&op);
    }
}

void insert_begin()
{
    NODE *ptr;
    int item;
    ptr=(NODE*)malloc(sizeof(NODE));
    if(ptr==NULL)
    {
        printf("memory unavailable\n");
        getch();
        exit(0);
    }
    no++;
    printf("enter element to insert: ");
    scanf("%d",&item);
    ptr->info=item;
    ptr->next=start;
    start=ptr;
}

void insert_end()
{
    NODE *ptr,*temp;
    int item;
    ptr=(NODE*)malloc(sizeof(NODE));
    if(ptr==NULL)
    {
        printf("memory unavailable\n");
        getch();
        exit(0);
    }
    no++;
    printf("enter lement you want to insert: ");
    scanf("%d",&item);
    ptr->info=item;
    ptr->next=NULL;
    temp=start;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}

void insert_sloc()
{
    NODE *ptr,*temp;
    int item,i,tempo;
    printf("enter the positon you want to insert the element in\n");
    scanf("%d",&tempo);

    if(tempo>=1 && tempo<=no)
    {
        ptr=(NODE*)malloc(sizeof(NODE));
        if(ptr==NULL)
        {
            printf("memory unavailable\n");
            getch();
            exit(0);
        }
        no++;
        printf("enter the element you want to insert: ");
        scanf("%d",&item);
        ptr->info=item;
        if(tempo==1)
        {
            ptr->next=start;
            start=ptr;
        }
        else
        {
            temp=start;
            for(i=0;i<tempo-1;i++)
            {
                temp=temp->next;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
    else
    {
        printf("invalid position\n");
    }   
}

void display()
{
    NODE *ptr;
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
        exit(0);
    }
}