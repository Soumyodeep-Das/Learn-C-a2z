#include<stdio.h>

void BubbleSort(int [], int);
void swap(int*, int*);

int main(){
    int n;
    printf("\nEnter how many numbers you want to sort : ");
    scanf("%d", &n);
    printf("\nEnter unsorted numbers : \n");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    BubbleSort(arr, n);
    printf("\nThe sorted array is : \t");
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}
void BubbleSort(int arr[], int n){
    int min;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[i]>arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}