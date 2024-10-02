#include<stdio.h>

int main(){
    printf("\nFactorial of a given number\n");
    int num, fact=1, n=1;
    printf("\nEntre a number :- ");
    scanf("%d", &num);

             //While_Loop

    // while(n<=num){
    //     fact*=n;
    //     n++;
    // }

            //Do_While_Loop

    //  do{
    //     fact*=n;
    //     n++;
    // }while(n<=num);

            //For_Loop

    // for(int n=1; n<=num; n++){
    //     fact*=n;
       
    // }
    
        printf("\nThe Factorial value of %d is :- %d\n", num, fact);
    return 0;
}