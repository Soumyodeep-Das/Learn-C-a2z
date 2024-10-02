#include<stdio.h>

int main(){
    printf("\nPrime number checking\n");
    int num, n=2, prime=1;
    printf("\nEnter a number for checking :- ");
    scanf("%d", &num);

            // For_Loop
            
    // for(n=2; n<num; n++){
    //     if(num%n==0){
    //         prime=0;
    //     break;
    //     }
    // }

            // While_Loop

    // while(n<num){
        
    //     if(num%n==0){
    //          prime=0;
    //     break;
    //     }
    //     n++;
    //     }

            // Do_While_loop
    
    // do{
    //     if(num%n==0){
    //         prime=0;
    //     break;
    //     }
    //     n++;
    //     }while(n<num);
    
        if(prime==0){
            printf("\nThe entered number is not a Prime number.\n");
           
        }
        else{
            printf("\nThe entered number is a Prime number.\n");
           
        }
        
    return 0;
}