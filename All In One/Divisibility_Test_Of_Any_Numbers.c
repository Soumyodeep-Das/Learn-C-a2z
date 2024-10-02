#include<stdio.h>

int main(){
    int num, n=2, prime=1;
    printf("\nEnter the number which's divisibility you want to check :- ");
    scanf("%d", &num);

    for(n=2; n<num; n++){
        if(num%n==0){
            prime=0;
        break;
        }
    }

    if(prime==0){
            printf("\nThe entered number is not a Prime number.\n");
            for(int i=1; i<=num ;i++){
                if (num%i==0)
                {
                    printf("\nThe divisor of %d is %d \n", num, i);
                }
                
            }
            
        }
        else{
            printf("\nThe entered number is a Prime number.\n");
            printf("\nSo, it can only be divisible by 1 and %d itself.\n\n", num);
        }


    return 0;
}