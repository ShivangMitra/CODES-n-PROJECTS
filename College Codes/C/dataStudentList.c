#include <stdio.h>
#include <stdlib.h>

struct stud
{
    int roll,course;
    char name[20];
    struct stud *next;
};

struct stud *start=NULL;

void csce(int c)
{
    struct stud *node;
    node=(struct stud*)malloc(sizeof(struct stud));
    printf("Enter datas of student\nRoll : ");
    scanf("%d",&node->roll);
    printf("Name : ");
    scanf("%s",node->name);
    node->course=c;
    if(start==NULL)
    {
        node->next=NULL;
        start=node;
    }
    else
    {
        node->next=start;
        start=node;
    }
}

void csse(int c)
{
    struct stud *node,*ptr=start;
    node=(struct stud*)malloc(sizeof(struct stud));
    printf("Enter datas of student\nRoll : ");
    scanf("%d",&node->roll);
    printf("Name : ");
    scanf("%s",node->name);
    node->course=c;
    node->next=NULL;
    if(start == NULL)
        start=node;
    else if(start->next == NULL)
        start->next=node;
    else
    {
        while(ptr->next != NULL)
            ptr=ptr->next;
        ptr->next=node;
    }

}

void create()
{
    int a,c;
    printf("Branch (CSCE->1& CSSE->2): ");
    scanf("%d",&a);
    if(a == 1)
        csce(a);
    else if(a == 2)
        csse(a);
    printf("\nDo U want to continue (1/0) ");
    scanf("%d",&c);
    while(c != 0)
    {
        printf("Branch (CSCE->1& CSSE->2): ");
        scanf("%d",&a);
        if(a == 1)
            csce(a);
        else if(a == 2)
            csse(a);
        printf("\nDo U want to continue (1/0) ");
        scanf("%d",&c);
    }

}

void display()
{
    if(start == NULL)
    {
        printf("List is empty!!\nTry again!!\n");
        return;
    }
    struct stud *ptr =start;
    printf("Name\tRoll\tBranch\n");
    while(ptr != NULL)
    {
        printf("%s\t%d\t",ptr->name,ptr->roll);
        if(ptr->course == 1)
            printf("csce\n");
        else
            printf("csse\n");
        ptr = ptr->next;
    }
    return;
}

int main()
{
    printf("Enter data to linked list :\n");
    create();
    printf("Sorted datas are :\n");
    display();
    return 0;
}