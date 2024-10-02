#include <stdio.h>

int main() {
    int arr[10];
    int i, n;
    int first = arr[0];
    int second = arr[0];

    printf("Enter how many numbers you want to input :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("%d th element: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; ++i) {
        if (first < arr[i]) {
            second = first;
            first = arr[i];
        } 
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == first)
        printf("There is no second largest element\n");
    else
        printf("\nThe Second largest element in the array is: %d", second);

    return 0;
} 