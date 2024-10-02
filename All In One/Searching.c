#include<stdio.h>

int LinearSearch(int arr[], int n, int key){
    int loc;
    for(int i=0; i<n; i++){
        if(arr[i]=key){
            loc=i;
        }
    }
    return(loc);
}
int BinarySearch(int arr[],int l, int h, int key){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        if(arr[mid]==key){
            return(mid);
        }
        else if(arr[mid]>key){
            BinarySearch(arr, l, mid, key);
        }
        else{
            BinarySearch(arr, mid+1, h, key);
        }
    }
}
void BubbleSort(int arr[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main(){
    int n, ch, key, loc;
    printf("\nEnter how many numbers you want to enter : ");
    scanf("%d", &n);
    printf("\nEnter the array : \n");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter number you want to search : ");
    scanf("%d", &key);
    printf("\nEnter your choice : ");
    printf("\n1. Linear Search : ");
    printf("\n2. Binary Search : \n\n");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            loc=LinearSearch(arr, n, key);
            printf("\nPosition of key by linear search is : %d", loc-1);
            break;
        case 2:
            BubbleSort(arr, n);
            printf("\nThe sorted array is : \t");
            for(int i=0; i<n; i++){
                printf("%d\t", arr[i]);
            }
            loc=BinarySearch(arr, 0, n, key);
            printf("\nPosition of key by binary search is : %d", loc+1);
            break;
    }
    
    
    return 0;
}