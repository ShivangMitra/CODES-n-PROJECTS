#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next;
};

typedef struct node node;

node *start1=NULL;
node *start2=NULL;
int elements=0;

void create(node *start, int listNumber)
{
    node *ptr;
    node *temp;
    int ch;

    start = (node *)malloc(sizeof(node));
    if(listNumber==1)
    {
        start1=start;
    }
    else if(listNumber==2)
    {
        start2=start;
    }
    printf("enter data: ");
    scanf("%d", &start->info);
    elements++;
    start->prev = NULL;
    start->next = NULL;

    printf("want to enter more? 1 for yes and 0 for no: ");
    scanf("%d", &ch);
    temp = start;

    while (ch == 1)
    {
        ptr = (node *)malloc(sizeof(node));
        printf("enter data: ");
        scanf("%d", &ptr->info);
        elements++;
        ptr->next = NULL;
        ptr->prev = temp;
        temp->next = ptr;
        temp = temp->next;

        printf("want to enter more? 1 for yes and 0 for no: ");
        scanf("%d", &ch);
    }
}

void display(node *start)
{
    node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("!!!list is empty!!!! create a list first----\n");
    }

    else
    {
        printf("the elements of double link list are:-\n");
        while (ptr != NULL)
        {
            printf("%d\t", ptr->info);
            ptr = ptr->next;
        }
    }
}

void mergeAndSort()
{
    node *ptr;
    ptr=start1;
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=start2;
    start2->prev=ptr;

    node *sort;
    sort=start1;
    int temp;
    for(int i=0;i<elements-1;i++)
    {
        sort=start1;
        for(int j=0;j<elements-1-i;j++)
        {
            if(sort->info > sort->next->info)
            {
                temp=sort->info;
                sort->info=sort->next->info;
                sort->next->info=temp;
            }
            sort=sort->next;
        }
    }
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
    printf("the merged and sorted array is\n");
    mergeAndSort();
    display(start1);
}