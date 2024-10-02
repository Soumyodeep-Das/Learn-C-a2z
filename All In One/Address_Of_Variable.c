#include<stdio.h>

int main(){
    int num, num1;
    printf("\nEnter a number :- ");
    scanf("%d", &num);
    int*j;
    j=&num;
    printf("\nThe address of the number is :- %u\n", j);
    printf("\nThe address of the number is :- %u\n", &num);
    printf("\nThe value of the number from its address :- %d\n", num);
    printf("\nThe value of the number from its address :- %d\n", *(&num));
    printf("\nThe value of the number from its address :- %d\n", *j);
    return 0;
}