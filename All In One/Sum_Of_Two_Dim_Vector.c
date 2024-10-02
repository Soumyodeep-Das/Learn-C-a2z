#include<stdio.h>

struct Vector{
    float x;
    float y;
};
struct Vector sumVector( struct Vector v1, struct Vector v2){
    struct Vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    return sum;
}



int main(){
    struct Vector v1, v2, sum;
    
    printf("Enter the x componant of first vector :- ");
    scanf("%f", &v1.x);
    printf("Enter the y componant of first vector :- ");
    scanf("%f", &v1.y);
    printf("Enter the x componant of second vector :- ");
    scanf("%f", &v2.x);
    printf("Enter the y componant of second vector :- ");
    scanf("%f", &v2.y);
    printf("The first vector's X dim is %f and Y dim is %f\n", v1.x, v1.y);
    printf("The second vector's X dim is %f and Y dim is %f\n", v2.x, v2.y);
    sum = sumVector(v1, v2);
    printf("The sum vector's X dim of result is %f and Y dim is %f\n", sum.x, sum.y);
    
    // printf("%f", )
    return 0;
}