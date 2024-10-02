#include<stdio.h>

void SumAvarage( int a, int b, int *sum, float *avarage);

int main(){
    int a, b, sum;
    float avarage;

    printf("\nEnter 2 Numbers :- ");
    scanf("%d, %d", &a, &b);

    SumAvarage(a, b, &sum, &avarage);
    
    printf("\nThe sum of those numbers is :- %d\n", sum);
    printf("\nThe avarage of those numbers is :- %f\n", avarage);
    
    return 0;
}

void SumAvarage( int a, int b, int *sum, float *avarage){
    *sum=a+b;
    *avarage=(float)*sum/2;
    
}