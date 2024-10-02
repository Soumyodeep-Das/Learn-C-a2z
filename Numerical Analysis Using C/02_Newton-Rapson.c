#include<stdio.h>
#include<math.h>

#define e 0.00001
// #define f(x) ((x*x*x)+3*x-1)
// #define df(x) ((2*x)+3)

#define f(x) (x*x*x - 3*x + 1.06)
#define df(x) ( 3*x*x - 3 )

/*float f(float x)
{
	float s;
	s=(x*x*x)+3*x-1;
	return s;
}
float df(float x)
{
	float d;
	d=(2*x)+3;
	return d;
}
*/
void main(){
	int i=1;
	float x, h, xn;
	printf("\nEnter the initial value : ");
	scanf("%f", &x);
	xn=x;
	printf("\n-----------------------------------------------------------------------");
    printf("\n n\t | \tx(n)\t | \tf(xn)\t |\tf'(xn)\t | \tx(n+1))\t |\n");
    printf("-----------------------------------------------------------------------");
	do
	{
		h=(f(xn)/df(xn));
		x=xn;
		xn=xn-h;
		printf("\n %d\t  \t%0.3f\t  \t%0.3f\t \t%0.3f\t \t  %0.3f\t", i, x, f(xn), df(xn), xn);
		i=i+1;
	}
	while( fabs(xn-x)>=e);
    
	
	printf("\n\nThe approximate value of root is : %0.3f\n", xn);
}
