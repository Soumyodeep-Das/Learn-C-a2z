#include<stdio.h>
//WAP to compute the factors of a given number.
int main(){
    int num;
    printf("\nEnter a number :- ");
    scanf("%d", &num);
    printf("\nThe factors of %d is :- \n", num);
    for(int i=1; i<=num; i++){
        if(num%i==0){
            printf("\n%d", i);
        }
    }
    printf("\n");
    return 0;
}