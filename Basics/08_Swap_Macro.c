#include<stdio.h>
//Write a macro that swaps two numbers. WAP to use it.

#define swap(x, y) { x=x+y; y=x-y; x=x-y;}
int main(){
    int a, b;
    printf("Enter 2 numbers to swap.. \nEnter value of 'a' :- ");
    scanf("%d", &a);
    printf("Enter value of 'b' :- ");
    scanf("%d", &b);
    swap(a, b);
    printf("Now the value of 'a' and 'b' is %d and %d",a ,b);
    return 0;
}