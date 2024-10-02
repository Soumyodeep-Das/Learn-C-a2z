#include<stdio.h>

int main(){
    volatile const int a = 5;
    ++a;
    printf("%d\n", a);
    a++;
    return 0;
}