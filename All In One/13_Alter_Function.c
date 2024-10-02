#include<stdio.h>
//Write a program in which a function is passed address of two variables and then alter its
//contents.
void swap( int* ptr1, int* ptr2){
    int temp; 
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int num1, num2;
    
    printf("\nEnter First number :- ");
    scanf("%d", &num1);
    printf("\nEnter Second number :- ");
    scanf("%d", &num2);
    
    swap(&num1, &num2);
    printf ("\nNow the First number is :- %d", num1);
    printf ("\nNow the Second number is :- %d\n", num2);
    return 0;
}