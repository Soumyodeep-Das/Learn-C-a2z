#include <stdio.h>
#include <stdlib.h>

int size = 20, top = -1;

void Push(int arr[], int);
void Pop(int arr[]);
void Display(int arr[]);

int main()
{
    int n = 9, key, arr[20];
    printf("\n\tWelcome to the programme 'Stack using Array'.\n");

    do
    {
        printf("\nEnter the index value of the operation you want to do from the given list :-\n");
        printf("\n1. Push a value into the stack.");
        printf("\n2. Pop a value from the stack.");
        printf("\n3. Display the Stack");
        printf("\n4. Repeat the programme.");
        printf("\n5. Exit the programme.");
        printf("\n\n");
        scanf("%d", &n);
        printf("\n");
        switch (n)
        {
        case 1:
            printf("\nEnter the value you want to PUSH into the Stack :- ");
            scanf("%d", &key);
            printf("\n");
            Push(arr, key);
            Display(arr);
            break;
        case 2:
            Pop(arr);
            Display(arr);
            break;
        case 3:
            printf("\nDisplay the Stack\n");
            Display(arr);
            break;
        case 4:
            printf("\nRepeating the programme.\n");
            break;
        default:
            printf("\nThank you for using the programme.");
            printf("\nHope you like it.\n");
            break;
        }
    } while (n < 5);
    return 0;
}

void Push(int arr[], int key)
{

    if (top > 20)
    {
        printf("\nStack Overflow");
    }
    else
    {
        //++top;
        arr[++top] = key;
    }
}

void Pop(int arr[])
{
    if (top >= 0)
    {
        printf("\nYou popped %d from the stack.\n", arr[top]);
        top--;
    }
    else
    {
        printf("\nStack Underflow\n");
    }
}

void Display(int arr[])
{
    int t = top;

    if (t >= 0)
    {
        while (t != -1)
        {
            printf("\n| %d |", arr[t]);
            t--;
        }
        printf("\n");
    }
    else
    {
        printf("\nNothing to Display.\n");
    }
}