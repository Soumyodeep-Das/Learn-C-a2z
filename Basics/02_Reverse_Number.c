#include<stdio.h>
//WAP to reverse a number.
int main(){
    int num, temp, rem;
    printf("Enter a number :- ");
    scanf("%d", &num);
    for(int i=0; num>0; i++){
        rem=num%10;
        num=num/10;
        printf("%d", rem);
    }
    return 0;
}