#include<stdio.h>
#include<math.h>
float fact(int);

int main(){
    
    float x[10], y[10][10], sum, p, u, temp;
    int i, j, k = 0, m, n, f;
    // float fact(int);
    printf("\nEnter how many records you want to enter : ");
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        printf("\nEnter the value of x%d : ", i);
        scanf("%f", &x[i]);
        printf("\nEnter the value of f(x%d) : ", i);
        scanf("%f", &y[k][i]);
    }
    printf("\nEnter x for finding f(x) : ");
    scanf("%f", &p);
    for( i=1; i<n; i++)
    {
        for( j=i; j<n; j++)
        {
            y[i][j] = y[i-1][j]-y[i-1][j-1];
        }
    }
    printf("\n------------------------------------------------------\n");
    printf("\n x(i)\t y(i)\t y1(i)\t y2(i)\t y3(i)");
    printf("\n------------------------------------------------------\n");
    for(i=0; i<n; i++)
    {
        printf("\n %.3f", x[i]);
        for(j=0; j<=i; j++)
        {
            printf("  ");
            printf(" %.3f", y[j][i]);
        }
        printf("\n");
    }
    i = 0;
    do
    {
        if(x[i]<p && p<x[i+1])
            k=1;
        else
            i++;
    }while(k != 1);
    f=i+1;
    u = (p-x[f])/(x[f]-x[f-1]);
    printf("\n u = %.3f", u);
    n = n - i + 1;
    sum = 0;
    for(i=0; i<n; i++)
    {
        temp = 1;
        for(j=0; j<i; j++)
        {
            temp = temp * (u + j);
        }
        m = fact(i);
        sum = sum + temp*(y[i][f]/m);
    }
    printf("\n f(%.2f) = %f ", p, sum);
    return 0;
}

float fact(int a)
{
    float fac = 1;
    if( a==0 )
        return (1);
    else 
        fac = a * fact(a-1);
    return (fac);
}