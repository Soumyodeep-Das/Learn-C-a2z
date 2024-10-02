#include<stdio.h>

int main(){
    int n=6;
    printf("Enter How many rows do you want :- ");
    scanf("%d", &n);
    
    for( int i=1; i<=n; i++){
        for( int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        
        for( int m=n-i; m>=0; m--){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    int k=1;
    for( int i=1; i<=n; i++){
        for( int j=1; j<=i; j++){
            printf("%d", k++);
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    int l=1;
    for( int i=1; i<=n; i++){
        for( int j=1; j<=i; j++){
            printf("%d", l%2);
            l++;
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=n-i; j>=0; j--){
            printf(" ");
        }
        for( int m=1; m<=i; m++){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=0; j<=n; j++){
            printf(" ");
        }
        for( int m=n-i; m>=0; m--){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=n-i; j>=0; j--){
            printf(" ");
        }
        for( int m=1; m<=i; m++){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        
        for( int m=n-i; m>=0; m--){
            printf("*");
        }
        for( int j=1; j<=n; j++){
            printf(" ");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=n-i; j>=0; j--){
            printf(" ");
        }
        for( int m=1; m<=i; m++){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=i-1; j>=0; j--){
            printf(" ");
        }
        for( int m=n-i; m>=0; m--){
            printf("*");
        }
        
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        for( int j=i-1; j<=n; j++){
            printf(" ");
        }
        for( int m=n-i; m>=0; m--){
            printf("*");
        }
        
        printf("\n");
    }
    
    printf("-----------------------------------------------------------------------\n");
    for( int i=1; i<=n; i++){
        
        for( int j=n-i; j>=0; j--){
            printf(" ");
        }
        for( int m=n; m>=0; m--){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    
    for( int i=1; i<=n; i++){
    
        for( int j=0; j<=i; j++){
            printf(" ");
        }
        for( int m=n; m>=0; m--){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for(int i=1; i<=n; i++){
        
        for( int j=0; j<=i; j++){
            printf(" ");
        }
        for( int k=(2*i-1); k<=n; k++){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    for(int i=1; i<=n; i++){
        
        for( int j=n-i; j>=0; j--){
            printf(" ");
        }
        for( int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
    printf("-----------------------------------------------------------------------\n");
    int p=n;
    for(int i=1; i<=n; i++){
        
        for( int j=1; j<=i; j++){
            printf("8");
        }
        for( int k=11; k<=n; --k){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}