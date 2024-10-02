#include<stdio.h>
#include<math.h>
#define f(x) x/cos(x)
// #define f(x) 1/(1+x)
void main(){
	float ll, ul, trap, sum=0.0, i, h;
	int n, m=1;
	printf("\nEnter the lower limit : ");
	scanf("%f", &ll);
	printf("\nEnter the upper limit : ");
	scanf("%f", &ul);
	printf("\nEnter the number of intervals : ");
	scanf("%d", &n);
	h=(ul-ll)/n;
	printf("\n n\t |\tx\t|\tf(x)\t|");
	for(i=ll+h; i<ul; i=i+h)
	{
		sum=sum+f(i);
		trap=((h/2.0)*(f(ll)+f(ul)+2*sum));
		printf("\n %d\t |\t%f\t|\t%f\t|",m++, i, f(i));
	}
	sum=sum+f(ul);
	printf("\n %d\t |\t%f\t|\t%f\t|",m++, i, f(i));
	printf("\nThe integrated value is = %f", trap);
}
