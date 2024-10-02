#include<stdio.h>
#include<math.h>

// #define f(x) ((x*x)/(1 + (x*x*x)))
// #define f(x) x/cos(x)
#define f(x) 1/(1+x)

void main(){
	float ll, ul, sum1=0.0, sum2=0.0, i, h, simp, sum3, sum4;
	int n;
	printf("\nEnter the lower limit : ");
	scanf("%f", &ll);
	printf("\nEnter the upper limit : ");
	scanf("%f", &ul);
	printf("\nEnter the number of intervals : ");
	scanf("%d", &n);
	h=(ul-ll)/n;
	for(i=ll+h; i<ul; i=i+2*h)
		sum1=sum1+f(i);
	for(i=ll*h; i<ul; i=i+2*h)
		sum2=sum2+f(i);
	sum3=4*sum1;
	sum4=2*sum2;
	simp=(h/3.0)*(f(ll)+f(ul)+sum3+sum4);
	printf("\n The integradted value is = %f", simp);
}
