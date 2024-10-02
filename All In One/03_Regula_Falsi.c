#include<stdio.h>
#include<math.h>

#define f(x) (x + log(x) - 2)

void main()
{   
    int count = 1;
	float x0, x1, x2, f1, f2, f0;
	do
    {
        printf("\nEnter the value of x0 : ");
        scanf("%f", &x0);
    }while(f(x0) > 0);
    do
    {
        printf("\nEnter the value of x1 : ");
        scanf("%f", &x1);
    }while(f(x1) < 0);
    printf("\n---------------------------------------------------------------------------------------------------------");
    printf("\n n\t|\tx0\t|\tx1\t|\tx2\t|\tf0\t|\tf1\t|\tf2\t|\n");
    printf("---------------------------------------------------------------------------------------------------------");
	do
    {
        f0=f(x0);
        f1=f(x1);
        x2=x0-((f0*(x1-x0))/(f1-f0));
        f2=f(x2);
        printf("\n%d\t    %f\t    %f\t    %f\t    %f\t    %f\t    %f\t",count++, x0, x1, x2, f0, f1, f2);
        if(f0*f2<0)
            x1=x2;
        else   
            x0=x2;
    } while (fabs(f2)>0.0001);
    printf("\n---------------------------------------------------------------------------------------------------------");
    
	printf("\n\n The approximate root of the given equation is %f\n", x2);
}
