#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *next;
}*start;
void createList(struct node *);
void displayList();
void insert(struct node *);
void WinMain()
{
    int c=0;
    start=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
       {
         printf("\n Out of Memory");
         exit(0);
       }
    while(c!=4)
    {
     printf("\nEnter 1 to create a linked list,Enter 2 to Display the linked list,Enter 3 to insert at the beginning of the linked list,Enter 4 to quit the program:");
     scanf("%d",&c);
     switch(c)
     {
         case 1: createList(start);
                 break;
         case 2: displayList();
                 break;
         case 3: insert(start);
                 break;
         default:printf("Wrong Choice");
     }
    }
}
void createList(struct node *start)
{
    char ch;
    int i=1;
    printf("\n Enter the value of %d node:",i);
    scanf("%d",&start->info);
    start->next=NULL;
    i++;
    printf("\n Press 'n' to quit,and other key to continue:");
    scanf(" %c", &ch);
    while(ch!='n')
    {
        start->next=(struct node*)malloc((sizeof(struct node)));
        if(start->next==NULL)
        {
            printf("\n Out of Memory space");
            exit(0);
        }
        start=start->next;
        printf("\n Enter the value of %d node:",i);
        scanf("%d",&start->info);
        start->next=NULL;
        i++;
        printf("\n Press 'n' to quit,and other key to continue:");
        scanf(" %c", &ch);
    }
}
void displayList()
{
  struct node *curr;
  curr=start;
  printf("%d",start->info); 
  printf("%d",curr->info);
  printf("\n Values in the list are:");
  while(curr!=NULL)
  {
      printf("%d ",curr->info);
      curr=curr->next;
  }
}
void insert(struct node *start)
{
    struct node *nnode;
    nnode=(struct node*)malloc(sizeof(struct node));
    if(nnode==NULL)
    {
        printf("Out of Memory Space");
        exit(0);
    }
    nnode->next=start;
    printf("\n input the new node value:");
    scanf("%d",&nnode->info);
    start=nnode;
}