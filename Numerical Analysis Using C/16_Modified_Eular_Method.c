#include<stdio.h>
#include<math.h>

// #define f(x,y) (1+(x*y))
// #define f(x,y) (x)*(x)+(y)
#define f(x,y) ((1 - (x*y))/(x*x*x))

void main()
{
    float x0, x1, y0, y1, y1_0, a, h, n, f, f1;
    int count, j, flag;
    printf("\nEnter initial value of x0 : ");
    scanf("%f", &x0);
    printf("\nEnter initial value of y0 : ");
    scanf("%f", &y0);
    printf("\nEnter h : ");
    scanf("%f", &h);
    printf("\nEnter value of last point : ");
    scanf("%f", &n);
    for(x1=x0+h, j=1; x1<=n+h; x1=x1+h, j++)
    {
        count = 0;
        flag = 0;
        f = f(x0, y0);
        y1_0 = y0 + (h*f);
        printf("\ny%d_0 = %.3f", j, y1_0);
        do
        {
            count++;
            f = f(x0, y0);
            f1 = f(x1, y1_0);
            y1 = y0 + (h/2) * (f+f1);
            printf("\nx = %.3f => y%d_%d = %.3f", x1, j, count, y1);
            if(fabs(y1-y1_0)<0.00001)
            {
                printf("\ny%d = %.3f", j, y1);
                flag = 1;
            }
            else
                y1_0 = y1;
        }while(flag!=1);
        y0 = y1;
    }
}