#include<stdio.h>

int func( int i );

int main(){
    int i;
    printf("\nEnter a number :- ");
    scanf("%d", &i);
    int*j;
    j=&i;
    printf("\nThe address of i is %u\n", j);
    printf("\nThe address of i is %u\n", &i);
    printf("\nThe address of i is %u\n", func(i));
    return 0;
}

int func( int i ){
    i=3;
    return i;
}