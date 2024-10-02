#include<stdio.h>

int main(){
    int i;
    int*j;
    j=&i;
    int**k;
    k=&j;

    printf("\nEnter a number :- ");
    scanf("%d", &i);

    printf("\nThe number is :- %d (Normal)\n", i);
    printf("\nThe number is :- %d (By_Single_Pointer)\n", *j);
    printf("\nThe number is :- %d (By_Pointer_To_Pointer)\n", **k);

    return 0;
}