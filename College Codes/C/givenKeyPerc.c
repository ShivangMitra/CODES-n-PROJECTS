#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int info;
    struct node *next;
};

typedef struct node node;
node *start=NULL;
int key;

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

void keyPer()
{
    node *temp;
    int counter=0,total=0;
    temp=start;
    while(temp != NULL)
    {
        if(temp->info == key)
        {
            counter++;
        }
        total++;
        temp=temp->next;
    }
    if(counter != 0)
    {
    int per=(counter*100)/total;
    printf("the key occours %d number of times\n",counter);
    printf("perc of occurence is %d",per);
    }
    else
    {
        printf("element not found");
    }
    
}

void main()
{
    printf("create ur list\n");
    create();
    display();
    printf("\n");

    printf("enter your key");
    scanf("%d",&key);

    keyPer();    
}