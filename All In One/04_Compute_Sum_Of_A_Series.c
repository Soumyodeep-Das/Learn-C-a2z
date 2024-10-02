#include<stdio.h>
//WAP to compute the sum of the first n terms of the following series, S =1-2+3-4+5…………….

int main(){
    int num, sum=0, odd=0, even=0;

    printf("\nHow many terms you want to calculate :- ");
    scanf("%d", &num);

    // for(; i<=num; i++){
     //   i++;
    // }
    int i=1;
    while(i<=num){
        odd += i;
        i = i+2;
        
    }
    printf("\nSum of Odd numbers :- %d\n", odd);

    int j=2;
    while(j<=num){
        even += j;
        j = j+2;
        
    }
    printf("\nSum of Even numbers :- %d\n", even);

    sum=odd-even;
    printf("\nThe Output of the series is :- %d\n", sum);
    return 0;
}