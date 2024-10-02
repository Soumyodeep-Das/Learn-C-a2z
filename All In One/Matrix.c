#include<stdio.h>

int main(){
    int arr[50][50], i, j, m, n;
    printf("\nEnter the numbers of rows : ");
    scanf("%d", &n);
    printf("\nEnter the numbers of coloumns : ");
    scanf("%d", &m);
    printf("\nEnter the elements into the matrix :\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe matrix is : \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%5d", arr[i][j]);
            }
            printf("\n");
    }
    return 0;
}