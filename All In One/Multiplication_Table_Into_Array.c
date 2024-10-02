#include<stdio.h>

int main(){
    int table[10];
    int j;
    printf("\n\nEnter which multiplication table do you want :- ");
    scanf("%d", &j);
    for(int i=0; i<10; i++){
        table[i]=j*(i+1);
    }
    printf("\n**The table of %d is**\n\n", j);
    for(int i=0; i<10; i++){
       printf("%d x %d is :- %d\n", j, i+1, table[i]);
    }
    return 0;
}