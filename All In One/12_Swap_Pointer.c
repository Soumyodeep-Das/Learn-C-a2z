#include<stdio.h>
// Write a program that swaps two numbers using pointers.

int main(){
    int num1, num2;
    int* ptr1;
    int* ptr2;
    
    printf("\nEnter First number :- ");
    scanf("%d", ptr1);
    printf("\nEnter Second number :- ");
    scanf("%d", ptr2);

    int* ptr1; 
    int* ptr2;
    /*ptr1 = &num1;
    ptr2 = &num2;*/
    int temp; 
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    
    printf ("\nNow the First number is :- %d", *ptr1);
    printf ("\nNow the Second number is :- %d", *ptr2);
    
    return 0;
}