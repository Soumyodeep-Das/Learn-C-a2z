#include<stdio.h>
#include<math.h>

#define ESP 0.0001

#define F1(x2, x3) ((16.55 - 2.2*(x2) - 1.2*(x3)) / 6.1)
#define F2(x1, x3) ((10.55 - 2.2*(x1) + 1.5*(x3)) / 5.5)
#define F3(x1, x2) ((16.80 - 1.2*(x1) + 1.5*(x2)) / 7.2)

// #define F1(x2, x3) ((17-(x2)+2*(x3)) / 20)
// #define F2(x1, x3) ((-18-3*(x1)+(x3)) / 20)
// #define F3(x1, x2) ((25-2*(x1)+3*(x2)) / 20)

void main()
{
    double x1 = 0, x2 = 0, x3 = 0, y1, y2, y3;
    int i = 0;
    printf("\n--------------------------------------------");
    printf("\n  x1\t\t  x2\t\t  x3");
    printf("\n--------------------------------------------");
    printf("\n%f\t%f\t%f", x1, x2, x3);
    do
    {
        y1 = F1(x2, x3);
        y2 = F2(x1, x3);
        y3 = F3(x1, x2);
        if(fabs(y1-x1)<ESP && fabs(y2-x2)<ESP && fabs(y3-x3)<ESP)
        {
            printf("\n--------------------------------------------\n");
            printf("\n\nx1 = %.3lf", y1);
            printf("\n\nx2 = %.3lf", y2);
            printf("\n\nx3 = %.3lf\n\n", y3);
            i = 1;
        }
        else
        {
            x1 = y1;
            x2 = y2;
            x3 = y3;
            printf("\n%f\t%f\t%f", x1, x2, x3);
        }
    }while( i != 1 );

}