#include<stdio.h>

int change(int *j);

int not_change(int i);

int main(){
    int i;
    printf("\nEnter a number :- ");
    scanf("%d", &i);
    int*j;
    j=&i;

    printf("\nChange of the number before passing from a function is :- %d\n", i*10);
    printf("\nAddress of the number before passing from a function is :- %u\n", j);
    int l = change(&i);
    printf("\nChange of the number after passing from a function is :- %d\n", l);
    printf("\nAddress of the number after passing from a function is :- %u\n", &l);
    int m = not_change(i);
    printf("The scanned number is :- %d\n", i);

    return 0;
}

int change(int *j){
    int k=*j+40;
    return k;
}

int not_change(int i){
    i = 501;
    return i;
}