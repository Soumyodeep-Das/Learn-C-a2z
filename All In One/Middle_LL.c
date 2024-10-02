#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *nextptr;
};
int n;
struct node *stnode;
void createNodeList(int n);
void displayList();
void insert_front();
void insert_random_position();
void deletion_front();
void delete_specified();
void Insert_Middle();
void Delete_Middle();
int main()
{
    int choice;
    printf("\n\nLinked list: To create and Display Singly Linked List:\n");
    printf("\n");
    printf("Press 1 to create nodes\nPress 2 to display nodes");
    printf("\nPress 3 to insert a node at front\nPress 4 to insert node at random position");
    printf("\nPress 5 to delete at front position\nPress 6 to delete from random position\nPress 7 to Insert into middle\nPress 8 to Delete from the middle ");
    printf("\nPress 9 to exit");
    do
    {
        printf("\n\nEnter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nHow many nodes you want ");
            scanf("%d", &n);
            createNodeList(n);
            displayList();
            break;
        }
        case 2:
        {
            displayList();
            break;
        }
        case 3:
        {
            insert_front();
            displayList();
            break;
        }
        case 4:
        {
            insert_random_position();
            displayList();
            break;
        }
        case 5:
        {
            deletion_front();
            displayList();
            break;
        }
        case 6:
        {
            delete_specified();
            displayList();
            break;
        }
        case 7:
        {
            Insert_Middle();
            displayList();
            break;
        }
        case 8:
        {
            Delete_Middle();
            displayList();
            break;
        }
        case 9:
        {
            printf("\nEXIT\n");
            break;
        }
        default:
        {
            printf("\nEnter valid choice ");
        }
        }
    } while (choice != 9);
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if (stnode == NULL)
    {
        printf("\nMemory can not be allocated.");
    }
    else
    {
        printf("\nInput data for node 1: ");
        scanf("%d", &num);
        stnode->data = num;
        stnode->nextptr = NULL;
        tmp = stnode;
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf("\nMemory cann't be allocated");
                break;
            }
            else
            {
                printf("input data for node %d: ", i);
                scanf("%d", &num);
                fnNode->data = num;
                fnNode->nextptr = NULL;
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if (stnode == NULL)
    {
        printf("\nList is empty.");
    }
    else
    {
        tmp = stnode;
        printf("\nThe datas are ");
        while (tmp != NULL)
        {
            printf("\n%d", tmp->data);
            tmp = tmp->nextptr;
        }
    }
}
void insert_front()
{
    struct node *p;
    int item;
    p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        printf("No Insertion");
    }
    else
    {
        printf("\nEnter the value ");
        scanf("%d", &item);
        p->data = item;
        p->nextptr = stnode;
        stnode = p;
        printf("New node is inserted");
        n++;
    }
}
void insert_random_position()
{
    struct node *p, *tmp;
    int i, pos, item;
    p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        printf("No Insertion");
    }
    else
    {
        printf("Enter the value ");
        scanf("%d", &item);
        p->data = item;
        printf("Enter the position after which new node will be inserted ");
        scanf("%d", &pos);
        tmp = stnode;
        for (i = 1; i < pos; i++)
        {
            tmp = tmp->nextptr;
            if (tmp == NULL)
            {
                printf("Cann't be inserted ");
                return;
            }
        }
        p->nextptr = tmp->nextptr;
        tmp->nextptr = p;
        printf("New node is inserted");
        n++;
    }
}
void deletion_front()
{
    struct node *ptr;

    if (stnode == NULL)
    {
        printf("\nNo deletion");
    }
    else
    {
        ptr = stnode;
        stnode = ptr->nextptr;
        free(ptr);
        printf("\nNode is deleted from front");
    }
    n--;
}
void delete_specified()
{
    struct node *ptr, *ptr_1;
    int pos, i;
    printf("\nEnter the position ");
    scanf("%d", &pos);
    ptr = stnode;
    for (i = 0; i < pos; i++)
    {
        ptr_1 = ptr;
        ptr = ptr->nextptr;

        /* if(ptr==NULL)
         {
             printf("\nThere are less than %d elements in the list..\n",pos);
             return;
         }*/
    }
    ptr_1->nextptr = ptr->nextptr;
    free(ptr);
    printf("\nThe position  of deleted node is after %d ", pos);
    n--;
}
void Insert_Middle()
{
    int i, j = 1;
    if (n % 2 == 0)
        i = (n / 2);
    else
        i = (n / 2) + 1;
    struct node *ptr, *middle_node;
    ptr = stnode;
    while (j < i)
    {
        ptr = ptr->nextptr;
        j++;
    }
    middle_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data into the middle node : ");
    scanf("%d", &middle_node->data);
    middle_node->nextptr = ptr->nextptr;
    ptr->nextptr = middle_node;
    n++;
}
void Delete_Middle()
{
    int i, j = 1;
    if (n % 2 == 0)
        i = (n / 2);
    else
        i = (n / 2) + 1;
    struct node *ptr, *middle_node;
    ptr = stnode;
    while (j < i - 1)
    {
        ptr = ptr->nextptr;
        j++;
    }
    middle_node = ptr->nextptr;
    ptr->nextptr = middle_node->nextptr;
    free(middle_node);
    n--;
}