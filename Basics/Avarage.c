#include<stdio.h>

float avarage(float a, float b, float c);

int main(){
    float a, b, c, e;
    printf("The avarage of three numbers\n");
    printf("\nEnter the first number :- ");
    scanf("%f", &a);
    printf("\nEnter the first number :- ");
    scanf("%f", &b);
    printf("\nEnter the first number :- ");
    scanf("%f", &c);

    printf("\nThe avarage of the three numbers is %f", avarage(a,b,c));


    return 0;
}

float avarage(float a, float b, float c){
    float d = (a+b+c)/3;
    return d;
}