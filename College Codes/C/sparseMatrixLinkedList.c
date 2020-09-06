#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int row;
    int column;
    int value;
    struct node *next;
};

typedef struct node node;

node *start=NULL;
int n,m;

void listSparse(int **arr)
{
    node *ptr,*temp;
    start=(node *)malloc(sizeof(node));
    start->column=m;
    start->row=n;
    start->value=0;
    start->next=NULL;
    ptr=start;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] != 0)
            {
                start->value++;
                temp=(node *)malloc(sizeof(node));
                temp->row=i;
                temp->column=j;
                temp->value=arr[i][j];
                temp->next=NULL;
                ptr->next=temp;
                ptr=ptr->next;
            }
        }
    }

    node *print;
    if(start==NULL)
    {
        printf("list is empty\n");
        getch();
    }
    else
    {
        print=start;
        printf("the elements in the linked list are: \n");
        while(print!=NULL)
        {
            printf("%d\t%d\t%d",print->row,print->column,print->value);
            print=print->next;
            printf("\n");
        }
    }
}

void main()
{
    printf("enter rows and columns of your matrix\n");
    scanf("%d%d",&n,&m);
    int **arr;
    arr=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    arr[i]=(int *)malloc(m*sizeof(int));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    }

    listSparse(arr);
}