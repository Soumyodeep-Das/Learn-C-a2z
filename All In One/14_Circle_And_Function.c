#include<stdio.h>
//Write a program which takes the radius of a circle as input from the user, passes it to
//another function that computes the area and the circumference of the circle and displays
//the value of area and circumference from the main() function.
void area(int a){
    float pi=3.141592654;
    float ar=pi*a*a;
    float cr=2*pi*a;
    printf("\nThe Area of the Circle is %.2f square unit\n", ar);
    printf("\nThe Circumference of the Circle is %.2f square unit\n\n", cr);
}
int main(){
    int rad;
    float l, p;
    printf("\nEnter a Value of Radius :- ");
    scanf("%d", &rad);
    area(rad);
    //printf("\nThe Area of the Circle is %.2f square unit\n", l);
    return 0;
}