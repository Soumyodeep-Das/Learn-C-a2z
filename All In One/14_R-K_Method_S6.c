#include<stdio.h>
// #define f(x,y) (x*x)+(y*y)
#define f(x, y) x-y
void main()
{
	float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
	int i, n;
	printf("\nEnter initial condition : \n");
	printf("Xo = ");
	scanf("%f", &x0);
	printf("Yo = ");
	scanf("%f", &y0);
	printf("\nEnter calculation point xn : ");
	scanf("%f", &xn);
	printf("\nEnter number of steps : ");
	scanf("%d", &n);
	
	//Calculating step size h
	// h = (xn-x0)/n;
	h=0.1;
	
	// Runge kutta Method
	printf("\n-----------------------------------------\n");
	printf(" n\t  Xo\t  Yo\t  Yn ");
    printf("\n-----------------------------------------");
	for(i=0; i<n; i++)
	{
		k1 = h * (f(x0, y0));
		printf("\n%0.4f", k1);
		k2 = h * (f((x0+h/2), (y0+k1/2)));
		printf("\n%0.4f", k2);
		k3 = h * (f((x0+h/2), (y0+k2/2)));
		printf("\n%0.4f", k3);
		k4 = h * (f((x0+h), (y0+k3)));
		printf("\n%0.4f", k4);
		k = (k1+2*k2+2*k3+k4)/6;
		yn = y0 + k;
		printf("\n %d\t%0.4f \t%0.4f \t%0.4f\n", i+1, x0, y0, yn);
		x0 = x0 + h;
		y0 = yn;
	}
	
	// Displaying Result
	
	printf("\nValue of y at x = %0.2f is %0.3f\n", xn, yn);
}
