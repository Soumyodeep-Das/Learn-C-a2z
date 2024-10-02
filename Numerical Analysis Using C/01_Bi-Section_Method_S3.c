#include<stdio.h>
#include<math.h>

#define f(x) (x*x + 2*x - 2)

void main()
{   
    int i=1;
	float x, x1, x2, fn, xn;
	printf("\n\nFind out the positive root of the given equation ");
	for(x=0;f(x)*f(x+1)>0; x++)
	{
		if(f(x)==0)
		{
			printf("\nThe root of the given equation is = %f", x);
			break;
		}
	}
    printf("\nThe root lies between %f and %f", x, x+1);
    printf("\n---------------------------------------------------------------------");
    printf("\n n\t| a(x1)\t |\t b(x2)\t |    x(n+1) = (a+b)/2 |    f(xn)   |\n");
    printf("---------------------------------------------------------------------");
	x1=x;
	x2=x+1;
	while(fabs(x2-x1)>=0.00001)
	{
		xn=(x1+x2)/2;
        fn = f(xn);
        printf("\n%d \t%f \t%f \t%f \t  %f", i, x1, x2, xn, fn);
		if(f(x1)*f(xn)<0)
			x2=xn;
		else
			x1=xn;
        i++;
	}
	printf("\n\n The approximate root of the given equation is %f\n", xn);
}
