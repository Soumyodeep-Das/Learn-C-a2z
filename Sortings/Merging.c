#include<stdio.h>

//Mergeing two sorted array into one using combine method of MERGE SORT

int main(){
    int n, m;
    printf("\n");
    printf("\nEnter size of the first array :- ");
    scanf("%d", &n);
    printf("\nEnter size of the second array :- ");
    scanf("%d", &m);
    int arr1[n], arr2[m];
    printf("\nEnter the first array :- \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the second array :- \n");
    for(int i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }
    int i, j, k, o=m+n;
    i=j=k=0;
    int arr[o];
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++, k++;
        }
        else{
            arr[k]=arr2[j];
            j++, k++;
        }
    }
    while(i<n){
        arr[k]=arr1[i];
        i++, k++;
    }
    while(j<m){
        arr[k]=arr2[j];
        j++, k++;
    }
    for(int i=0; i<k; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}