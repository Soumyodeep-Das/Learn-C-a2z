#include<stdio.h>

int main(){
    int num, a, sum=0;
    printf("\nEnter a number :- ");
    scanf("%d", &num);

    while(num!=0){
        a=num%10;
        num=num/10;
        sum=(a*10)+(sum*10);
    }
    printf("\nAfter reversing the number it is :- %d", sum/10);
    return 0;
}