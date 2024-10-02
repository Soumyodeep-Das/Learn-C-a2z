#include<stdio.h>
//WAP to compute the sum of the first n terms of the following series,
//S=1+1/2+1/3+1/4+……
int main(){
    int num;
    float x, sum=0.0;

    printf("\nHow many terms you want to calculate :- ");
    scanf("%d", &num);

    for(float i=1; i<=num; i++){
        x=1/i;
        sum+=x;
    }
    printf("\n%f\n", sum);
    
    return 0;
}