#include<stdio.h>

float force(float m);

int main(){
    float m;
    printf("Enter the mass of a object :- ");
    scanf("%f", &m);
    printf("The force of attraction on the body is :- %f", force(m));
    return 0;
}

float force(float m){
    
    float f= m*9.8;

    return f;
}