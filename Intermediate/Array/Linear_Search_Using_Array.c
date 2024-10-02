#include <stdio.h>

void LinearSearch(int a[], int, int);

int main()
{
    printf("\nWelcome to the programme 'Linear Search using Array'\n");
    int n, a[30], key;
    printf("\nEnter how many numbers you want to Store :- ");
    scanf("%d", &n);
    printf("\nEnter the numbers : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter which number you want to search : \n");
    scanf("%d", &key);
    LinearSearch(a, n, key);
    return 0;
}

void LinearSearch(int a[], int n, int key)
{
    int loc;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            loc = i;
            break;
        }
    }
    printf("\nThe number is at %dth position in the list.\n", loc + 1);
}