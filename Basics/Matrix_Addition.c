#include<stdio.h>

int main(){
    int a[50][50], b[50][50], c[50][50], i, j, m, n;
    printf("\nEnter the numbers of rows for First Matrix: ");
    scanf("%d", &n);
    printf("\nEnter the numbers of coloumns for First Matrix: ");
    scanf("%d", &m);
    printf("\nEnter the elements into the First Matrix :\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nEnter the numbers of rows for Second Matrix: ");
    scanf("%d", &n);
    printf("\nEnter the numbers of coloumns for Second Matrix: ");
    scanf("%d", &m);
    printf("\nEnter the elements into the Second Matrix :\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe First Matrix is : \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%5d", a[i][j]);
            }
            printf("\n");
    }
    printf("\nThe Second Matrix is : \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%5d", b[i][j]);
            }
            printf("\n");
    }
    printf("\nThe Sum of these 2 Matrix is : \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%5d", c[i][j]);
            }
            printf("\n");
    }
    return 0;
}