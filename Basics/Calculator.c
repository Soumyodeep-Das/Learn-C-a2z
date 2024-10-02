#include<stdio.h>

int main(){
    int n;
    char c;
    
    printf("\nIt is a calculator\n");
    
    printf("\nEnter how many number you want to calculate :- ");
    
    scanf("%d", &n);
    
    
    int num[n];
    for(int i=1; i<=n; i++){
        printf("\nEnter your %d number :- \n", i);
        scanf("%d", &num[i]);
    }
    
    
    
    printf("Enter what oparation do you want to do :- ");
    
    printf("\n'P' for Plus 'M' for Minus 'I' for Multiplication 'D' for Division\n");
    scanf("%c", &c);
    printf("\nEnter your %c number :- \n", c);
    // for(int i=1; i<=n; i++){
    //    printf("\n%d\n", num[i]);
    // }
    // if(ch=='p'){
    //     for(int i=1; i<=n; i++){
    //     int sum;
    //     sum+=num[i];
    //     printf("\n%d\n", 2);
    // }
    // }


    return 0;
}