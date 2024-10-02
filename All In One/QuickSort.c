#include <stdio.h>

void QuickSort(int[], int, int);
int Partition(int[], int, int);
void swap(int *, int *);

int main()
{
    int n;
    printf("\nEnter size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter unsorted numbers : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    QuickSort(arr, 0, n-1);
    printf("\nSorted numbers : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

int Partition(int arr[], int start, int end)
{
    int l, h, x;
    l = start, h = end;
    x = arr[start];
    while (l < h)
    {
        while (arr[l] <= x)
        {
            l++;
        }
        while (arr[h] > x)
        {
            h--;
        }
        if (l < h)
        {
            swap(&arr[l], &arr[h]);
        }
    }
    swap(&arr[start], &arr[h]);
    return h;
}

void QuickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int loc;
        loc = Partition(arr, start, end);
        QuickSort(arr, start, loc);
        QuickSort(arr, loc + 1, end);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}