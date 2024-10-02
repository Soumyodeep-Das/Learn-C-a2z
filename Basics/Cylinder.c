#include<stdio.h>

int main(){
    int radius, height;
    printf("Enter the radius of a circular base of the cylinder:- \n");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder:- \n");
    scanf("%d", &height);
    float pi= 3.14;
    
    printf("The area of the circular base of the cylinder:- %f\n", pi*radius*radius);

    
    printf("The volume of the cylinder :- %f\n", pi*radius*radius*height);



    return 0;
}