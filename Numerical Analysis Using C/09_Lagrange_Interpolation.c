#include<stdio.h>
#include<math.h>


int main(){
    float x[10], y[10], temp=1, f[10], sum=0.0, p;
    int i, n, j, k=0, c;
    printf("\nEnter how many record you will enter : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter the value of x%d : ", i);
        scanf("%f", &x[i]);
        printf("\nEnter the value of f(x%d) : ", i);
        scanf("%f", &y[i]);
    }
    printf("\nEnter x for finding f(x) : ");
    scanf("%f", &p);
    for(i=0; i<n; i++)
    {
        temp = 1;
        k = i;
        for(j=0; j<n; j++)
        {
            if(k==j)
                continue;
            else   
                temp = temp * ((p-x[j])/(x[k]-x[j]));
                // printf("\n%f", temp);
        }
        f[i] = y[i]*temp;
    }

    for(i=0; i<n; i++)
    {
        printf("\n%f", f[i]);
        sum = sum + f[i];
    }
    printf("\n\n f(%.1f) = %f", p, sum);
    return 0;
}