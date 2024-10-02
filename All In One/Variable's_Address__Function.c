#include<stdio.h>

int main(){
    int i;
    printf("\nEnter a number :- ");
    scanf("%d", &i);

    int*j;
    j=&i;

    printf("\nAddress of the number without entering into function :- %u\n", j);
    printf("\nAddress of the number entering into function :- %u\n", &i);

    return 0;
}

