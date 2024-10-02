#include<stdio.h>

int num( int n );

int main(){
    int n;
    printf("\nSum of first n natural numbers\n");

    printf("\nEnter how much natural numbers you want to sum :- ");
    scanf("%d", &n);
    printf("\nThe sum of first %d natural numbers is %d\n", n, num(n));
    return 0;
}

int num( int n ){
    int x;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        x =  n+num(n-1);
        return x;
    }
}