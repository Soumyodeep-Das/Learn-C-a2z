#include<stdio.h>

int main(){
    int a, b;
    printf("\nEnter First Number :- ");
    scanf("%d", &a);
    printf("\nEnter Second Number :- ");
    scanf("%d", &b);
    int sum;
    sum=a+b;
    printf("\nThe Sum of %d and %d is = %d\n", a, b, sum);
    return 0;
}