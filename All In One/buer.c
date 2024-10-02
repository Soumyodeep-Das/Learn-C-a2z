#include <stdio.h>
#include<stdlib.h>
int Q[10], choice, F = -1, R = -1;

void insertion(int);
void deletion();
void display();
int main()
{

    int n;
    printf("Enter the size of the Queue ");
    scanf("%d", &n);
    printf("1 for Insertion\n2 for Deletion\n3 for Display\n4 for Exit");
    do
    {
        printf("\nEnter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            insertion(n);
            break;
        }
        case 2:
        {
            deletion();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exit");
            break;
        }
        default:
        {
            printf("\nEnter valid choice ");
        }
        }
    } while (choice != 4);
    return 0;
}
void insertion(int n)
{
    if (R > n)
    {
        printf("Queue is overflow ");
    }
    else
    {
        int item;
        printf("\nEnter the item to insert ");
        scanf("%d", &item);
        ++R;
        Q[R] = item;
    }
}
void deletion()
{
    if (R == F)
    {
        R = F = -1;
        printf("Queue underflow ");
        exit(0);
    }
    else
    {
        ++F;
        printf("Deleted item is %d", Q[F]);
    }
}
void display()
{
    if (F == R)
    {
        printf("No Display ");
    }
    else
    {
        for (int i = F; i != R; i++)
            printf("%d", Q[i]);
        printf("\n");
    }
}
