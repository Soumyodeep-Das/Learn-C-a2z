#include<stdio.h>
#include<math.h>

#define f(x,y) (1+(x*y))

void main()
{
    float x, y, h, n, xf;
    int i;
    printf("\nEnter initial x : ");
    scanf("%f", &x);
    printf("\nEnter initial f(x) : ");
    scanf("%f", &y);
    printf("\nEnter h : ");
    scanf("%f", &h);
    printf("\nEnter value of x for which you want to find f(x) : ");
    scanf("%f", &xf);
    n = (xf-x)/h;
    for(i=1; i<=(int)n; i++)
    {
        y = y+(h*f(x,y));
        x = x+h;
    }
    printf("\nThe result is : %f", y);
}