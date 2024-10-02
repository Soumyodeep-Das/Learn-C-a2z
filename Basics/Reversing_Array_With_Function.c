#include<stdio.h>
void reverseArray( int *arr, int i){
    for( int j=0; j<(i/2); j++){
        int temp=arr[j];
        arr[j]=arr[i-j-1];
        arr[i-j-1]=temp;
    }
}
int main(){
    int i=0;
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for( int i=0; i<10; i++){
        printf("The actual array is :- %d\n", arr[i]);
    }
    reverseArray(arr, 10);
    for( int i=0; i<10; i++){
        
        printf("The array after passing into a reverse function :- %d\n", arr[i]);
    }

    return 0;
}