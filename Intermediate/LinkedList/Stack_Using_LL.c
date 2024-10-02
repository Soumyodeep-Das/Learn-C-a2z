#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int info;
    struct Node *next;
};
typedef struct Node node;

node *start = NULL;

node *CreateNode()
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p->next = NULL;
    printf("\nEnter the data/info :- ");
    scanf("%d", &p->info);
    return (p);
}

void Push();
void Pop();
void display();

int main()
{
    printf("\n\t\tWelcome to the programme 'Stack Using Linked List'\n");
    int n = 9;
    do
    {
        printf("\nEnter the Index of function which you want to do from the given List :- ");
        printf("\n1. PUSH into Stack.");
        printf("\n2. POP into Stack.");
        printf("\n3. Display the Stack.");
        printf("\n4. Repeat the Programme.");
        printf("\n5. Exit the Programme.");
        printf("\n\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nRepeating the programme.\n");
            break;
        case 5:
            printf("\nThank You for using this programme.\n\tHope you like it.\n\n");
            break;
        default:
            printf("\nNo such Function available.\n");
            break;
        }
    } while (n < 5);

    return 0;
}

void Push()
{
    node *p;
    p = CreateNode();
    if (start == NULL)
    {
        start = p;
    }
    else
    {
        p->next = start;
        start = p;
    }
}

void Pop()
{
    node *p;
    if (start == NULL)
    {
        printf("\nUnderflow Condition\nNothing is available to POP\n");
    }
    else
    {
        p = start;
        printf("\nThe poped element is %d\n", p->info);
        start = start->next;
        free(p);
    }
}

void display()
{
    node *p;
    p = start;
    printf("\nThe pushed elements are :\n");
    while (p != NULL)
    {
        printf("\n| %d |", p->info);
        p = p->next;
    }
}