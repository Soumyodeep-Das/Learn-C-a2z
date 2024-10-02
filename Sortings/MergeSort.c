#include<stdio.h>

void MergeSort(int arr[], int, int);
void Merge(int arr[], int, int, int );

int main(){
    printf("\nWelcome to Recursive Approach of Merge Sort\n");
    int n;
    printf("\nEnter size of the array :- ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the unsorted array :- \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    MergeSort(arr, 0, n);
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
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
    i=l, j=mid+1; k=l;
    int brr[h];
    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            brr[k]=arr[i];                                                                                                                                                          
            i++, k++;
        }
        else{
            brr[k]=arr[j];
            j++, k++;
        }
    }
    while(i<=mid){
        brr[k]=arr[i];
        i++, k++;
    }
    while(j<=h){
        brr[k]=arr[j];
        j++, k++;
    }
    for(int i=l; i<=h; i++){
        arr[i]=brr[i];
    }
}