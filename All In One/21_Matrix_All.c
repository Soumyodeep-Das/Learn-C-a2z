#include<stdio.h>
//Write a menu-driven program to perform following Matrix operations (2-D array
//implementation): a) Sum b) Difference c) Product d) Transpose

int main(){
    int arr[50][50], brr[50][50], c[50][50], m1, n1, m2, n2, d=0;
    printf("\nWelcome to the programme about Matrix using 2D-Array..");

    do{
    printf("\nEnter number of Row of the First Matrix ; \n");
    scanf("%d", &m1);
    printf("\nEnter number of Column of the First Matrix ; \n");
    scanf("%d", &n1);
    printf("\nEnter the Elements of the Matrix : \n");
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            printf("Arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nEnter number of Row of the Second Matrix ; \n");
    scanf("%d", &m2);
    printf("\nEnter number of Column of the Second Matrix ; \n");
    scanf("%d", &n2);
    printf("\nEnter the Elements of the Matrix : \n");
    for(int i=0; i<m2; i++){
        for(int j=0; j<n2; j++){
            printf("Brr[%d][%d] : ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\nThe First Matrix is : \n");
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){            
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe Second Matrix is : \n");
    for(int i=0; i<m2; i++){
        for(int j=0; j<n2; j++){           
            printf("%4d", brr[i][j]);
        }
        printf("\n");
    }

    
    printf("Enter what operation you want to do with a Matrix : \n");
    printf("1 -->> Sum\n");
    printf("2 -->> Difference\n");
    printf("3 -->> Product\n");
    printf("4 -->> Transpose\n");
    printf("5 -->> Restart the Programme\n");
    printf("6 -->> Exit the Programme\n");
    scanf("%d", &d);

    
    if(d==1){
        printf("You choose to do Sum with the Matrix..");
        printf("\nThe Sum of the Matrixs is : \n");
        for(int i=0; i<m1; i++){
            c[0][0]=0;
            for(int j=0; j<n2; j++){
                c[i][j]=arr[i][j]+brr[i][j];
                printf("%4d", c[i][j]);
            }
            printf("\n");
        }
    }
    else if(d==2){
        printf("You choose to do Difference between the Matrix..");
        printf("\nThe Difference of the Matrixs is : \n");
        for(int i=0; i<m1; i++){
            c[0][0]=0;
            for(int j=0; j<n2; j++){
                c[i][j]=arr[i][j]-brr[i][j];
                printf("%4d", c[i][j]);
            }
            printf("\n");
        }
    }
    else if(d==3){
        printf("You choose to do Product of the Matrix..");
        printf("\nThe Difference of the Matrixs is : \n");
        for(int i=0; i<m1; i++){
            c[0][0]=0;
            for(int j=0; j<n2; j++){
                for(int k=0; k<n2; k++){
                    c[i][j]=c[i][j]+arr[i][k]*brr[k][j];                   
                }
                printf("%4d", c[i][j]);
            }
            printf("\n");
        }
    }
    else if(d==4){
        printf("You choose to Transpose the Matrix..");
        printf("\nTransposed First Matrix is : \n");
        for(int i=0; i<m1; i++){
            for(int j=0; j<n1; j++){            
                printf("%4d", arr[j][i]);
            }
            printf("\n");
        }
        printf("\nTransposed Second Matrix is : \n");
        for(int i=0; i<m2; i++){
            for(int j=0; j<n2; j++){            
                printf("%4d", brr[j][i]);
            }
            printf("\n");
        }
    }
    else if(d==5){
        printf("\nYou choose to Restart the Programme..\n");
    }
    else if(d==6){
        printf("\nYou choose to Exit..");
        printf("\nThank You for using this programme..\n");
    }
    
    }while(d==5);
  
    return 0;
}