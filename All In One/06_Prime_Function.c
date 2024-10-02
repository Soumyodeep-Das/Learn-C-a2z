#include<stdio.h>
//Write a function to find whether a given no. is prime or not. Use the same to generate the
//prime numbers less than 100.

void prime(int a){
    int prime;
    for( int i=2; i<a; i++){
        if(a%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
            printf("\n%d is not a Prime number.\n", a);
           
        }
        else{
            printf("\n%d is a Prime number.\n", a);
           
        }
   
}
int main(){
    int num;
    char c;
    printf("Do you want to enter a number or want to enter a range for checking : \n\n Enter 'n' for a number.. \n\n Enter 'r' for range..\n\n");
    scanf("%c", &c);
    if(c=='n'){
        printf("\nEnter a Number for checking :- ");
        scanf("%d", &num);
        prime(num);
    }
    else{
        printf("\nEnter the upper Range for checking :- ");
        scanf("%d", &num);
        for(int i=0; i<=num; i++){
            prime(i);
        }
        
    }
    
    return 0;
}