#include<stdio.h>

int main(){
    
    int count;
    printf("\nHow many numbers you want to enter:-  ");
    scanf("%d", &count);
    printf("\nEnter the numbers :- \n");
    int num[count];
    for(int i=1; i<=count; i++){
        scanf("\n%d", &num[i]);
    }
    printf("\nThe positive integers are :- \n");
    for(int i=1; i<=count; i++){
        if(num[i]>0){
            printf("\n%d\n", num[i]);
        }
        
    }
    
        
    
    return 0;
}