#include<stdio.h>

int main(){
    int *a, *b, *c;
    int p, q;
    a=&p;
    b=&q;
    printf("\nEnter two no. :- ");
    scanf("%d %d", a, b);
    *c=*a;
    *a=*b;
    *b=*c;
    printf("\nAfter swapping the no. are %d %d", *a, *b);
    return 0;
}