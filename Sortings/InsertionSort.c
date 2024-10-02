#include<stdio.h>

void Insertion(int [], int);

int main(){
    int n;
    printf("\nEnter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter unsorted numbers : \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    Insertion(arr, n);
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}
void Insertion(int arr[], int n){
    int temp, loc;
    for(int i=1; i<n; i++){
        temp=arr[i];
        int j=i-1;
        while( j>=0 && arr[j]>temp ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
