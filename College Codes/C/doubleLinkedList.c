#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct linkNode
{
    struct linkNode *prev;
    int data;
    struct linkNode *next;
};

typedef struct linkNode node;
node *start = NULL;
int n = 0;

void create();
void display();
void insertAtBegin();
void insertAtEnd();
void insertAtspecificLoacation();
void deleteFromBegin();
void deleteFromEnd();
void deleteFromspecificLocation();

void main()
{
    printf("********link list menu*********\n");
    printf("press 'n' to exit the loop.\n");
    printf("1. create a link list.\n");
    printf("2. display the Linked List\n");
    printf("3. insert element in beginning.\n");
    printf("4. insert element at end.\n");
    printf("5. insert element at a specific location. location provided by the user.\n");
    printf("6. delete the first element.\n");
    printf("7. delete the last element.\n");
    printf("8. delete an element from a specific location.\n");
    printf("---------------------------------------------------------------\n");

    int choice;

    char ch;
    while (1)
    {
        printf("enter your choice: ");
        scanf("%d", &choice);
        ch = getchar();
        if (ch == 'n')
        {
            break;
        }

        else
        {
            switch (choice)
            {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                insertAtBegin();
                break;

            case 4:
                insertAtEnd();
                break;

            case 5:

                insertAtspecificLoacation();
                break;

            case 6:
                deleteFromBegin();
                break;

            case 7:
                deleteFromEnd();
                break;

            case 8:
                deleteFromspecificLocation();
                break;

            default:
                printf("!!!!!CHOOSE A CORRECT OPTION!!!!");
            }
        }
    }
}

void create()
{
    node *ptr;
    node *temp;
    int ch;

    start = (node *)malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d", &start->data);
    start->prev = NULL;
    start->next = NULL;
    n++;

    printf("want to enter more? 1 for yes and 0 for no: ");
    scanf("%d", &ch);
    temp = start;

    while (ch == 1)
    {
        ptr = (node *)malloc(sizeof(node));
        printf("enter data: ");
        scanf("%d", &ptr->data);
        n++;
        ptr->next = NULL;
        ptr->prev = temp;
        temp->next = ptr;
        temp = temp->next;

        printf("want to enter more? 1 for yes and 0 for no: ");
        scanf("%d", &ch);
    }
}

void display()
{

    node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("!!!list is empty!!!! create a list first----\n");
        create();
    }

    else
    {
        printf("the elements of double link list are:-\n");
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

void insertAtBegin()
{
    node *ptr, *temp;

    ptr = (node *)malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d", &ptr->data);
    n++;

    temp = start;

    ptr->prev = NULL;
    ptr->next = temp;
    temp->prev = ptr;
    start = ptr;
}

void insertAtEnd()
{
    node *ptr, *temp;

    ptr = (node *)malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d", &ptr->data);
    n++;

    temp = start;

    while (temp->next != NULL)
    {

        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;
    ptr->next = NULL;
}

void insertAtspecificLoacation()
{
    if (start == NULL)
    {
        printf("link list not available.create one first!!!!\n\n");
        create();
    }
    else
    {

        node *ptr, *temp;
        int i, loc;

        ptr = (node *)malloc(sizeof(node));
        printf("enter the element: ");
        scanf("%d", &ptr->data);
        printf("position: ");
        scanf("%d", &loc);
        if (loc > n)
        {
            printf("location not available!!!!! enter a valid location!!!!\n\n");
            insertAtspecificLoacation();
        }
        else
        {
            n++;

            temp = start;
            for (i = 0; i < loc - 1; i++)
            {
                temp = temp->next;
            }
            if (temp == NULL)
            {

                printf("no data !!!");
            }
            ptr->next = temp->next;
            ptr->prev = temp;
            temp->next = ptr;
            temp->next->prev = ptr;
        }
    }
}

void deleteFromBegin()
{
    node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("the list is empty!!!!. nothing to delete.");
    }

    else
    {
        start = start->next;
        start->prev = NULL;
        printf("deleted element is:%d\n", ptr->data);
        free(ptr);
    }
}

void deleteFromEnd()
{
    node *ptr = start;
    node *temp;

    if (start == NULL)
    {

        printf("create a list first!!!!. nothing to delete.");
    }
    else
    {
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("deleted element is %d:\n", ptr->data);
        free(ptr);
    }
}

void deleteFromspecificLocation()
{
    if (start == NULL)
    {
        printf("link list not available.create one first!!!!\n\n");
        create();
    }
    else
    {

        node *ptr, *temp = start;
        int i, loc;

        printf("position: ");
        scanf("%d", &loc);
        if (loc > n)
        {
            printf("location not available!!!!! enter a valid location!!!!\n\n");
            deleteFromspecificLocation();
        }
        else
        {
            while (temp != NULL && i < loc)
            {

                ptr = temp;
                temp = temp->next;
                i++;
            }

            ptr->next = temp->next;
            temp->next->prev = ptr;
            printf("the deleted element is: %d.\n", temp->data);
            free(temp);
        }
    }
}