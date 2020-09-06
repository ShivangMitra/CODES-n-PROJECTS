#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int info;
    struct node *next;
};

typedef struct node node;
node *start=NULL;

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
    node *odd, *end, *evend;


    odd=start;
    while(((odd->info)%2) == 0)
    {
        odd=odd->next;
    }

    evend=start;
    while(evend->next->info%2 == 0)
    {
        evend=evend->next;
    }    

    end=start;
    while((end->next) != NULL)
    {
        end=end->next;
    }

    node *temp;
    temp=start;
    start=odd;
    end->next=temp;
    evend->next=NULL;

}

void main()
{
    printf("create ur list\n");
    create();
    display();
    printf("\n");
    swap();
    display();
}