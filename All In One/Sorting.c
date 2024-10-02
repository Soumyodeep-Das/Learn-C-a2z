#include<stdio.h>
void Merge(int [], int, int, int);
void MergeSort(int [], int, int);
int Pertition(int [], int, int);
void QuickSort(int [], int, int);
void swap(int *, int *);

int main(){
    int n, ch;
    printf("\nEnter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the array : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter your choice : ");
    printf("\n1. Merge sort : ");
    printf("\n2. Quick sort : \n\n");
    scanf("%d", &ch);
    switch(ch){
        case 1: MergeSort(arr, 0, n-1);
                printf("\nThe sorted array is : ");
                for(int i=0; i<n; i++){
                    printf("%d\t", arr[i]);
                }
            break;
        case 2: QuickSort(arr, 0, n-1);
                printf("\nThe sorted array is : ");
                for(int i=0; i<n; i++){
                    printf("%d", arr[i]);
                }
            break;
    }
    return 0;
}

void MergeSort(int arr[], int l, int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, h);
        Merge(arr, l, h, mid);
    }
}

void Merge(int arr[], int l, int h, int mid){
    int i, j, k;
    i=l, j=mid+1, k=l;
    int a[h];
    while(i<=mid && j<=h){
        if(arr[i]>arr[j]){
            a[k]=arr[i];
            k++, i++;
        }
        else{
            a[k]=arr[j];
            k++, j++;
        }
    }
    while(i<=mid){
        a[k]=arr[i];
        k++, i++;
    }
    while(j<=h){
        a[k]=arr[j];
        k++, j++;
    }
    for(int i=l; i<=h; i++){
        arr[i]=a[i];
    }
}

void QuickSort(int arr[], int l, int h){
    int loc;
    if(l<h){
        loc=Pertition(arr, l, h);
        QuickSort(arr, l, loc);
        QuickSort(arr, loc+1, h);
    }
}

int Pertition(int arr[], int l, int h){
    int pivot, low, high;
    pivot=arr[l];
    low=l; high=h;
    while(low<high){
        while(pivot>=arr[low]){
            low++;
        }
        while(pivot<arr[high]){
            high--;
        }
        if(low<high){
            swap(&arr[low], &arr[high]);
        }
        
    }
    swap(&arr[l], &arr[high]);
    return(high);
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}