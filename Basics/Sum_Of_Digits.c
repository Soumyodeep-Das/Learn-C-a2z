#include<stdio.h>
// Sum of digits of a number only by a for loop
int main(){

    int n, sum=0, l;
    printf("Enter a number :- ");
    scanf("%d", &n);

    for(; n>0; l=n%10, n=n/10, sum+=l)
    {}
    printf("%d\n", sum);
    return 0;
}


