#include<stdio.h>
#include<math.h>

#define f(x) (x*x + 2*x - 2)

void main()
{
    float x1, x2, x3, f1, f2, t;
    int count = 1;
    printf("\nEnter the value of x1 : ");
    scanf("%f", &x1);
    printf("\nEnter the value of x2 : ");
    scanf("%f", &x2);
    printf("\n-----------------------------------------------------------------------------------");
    printf("\n n\t x(n-1)\t \t    xn\t \t  x(n+1)\t f(x(n-1))\t   f(xn)\t");
    printf("\n-----------------------------------------------------------------------------------");
    do
    {
        f1 = f(x1);
        f2 = f(x2);
        x3 = x2-((f2*(x2-x1))/(f2-f1));
        printf("\n %d\t %f\t %f\t %f\t %f\t %f", count++, x1, x2, x3, f1, f2);
        x1 = x2;
        x2 = x3;
        if(f2<0)
            t = fabs(f2);
        else
            t = f2;
    }while(t>0.0001);
    printf("\n-----------------------------------------------------------------------------------");
    printf("\nThe approximate root of f(x) is : %f", x3);

}