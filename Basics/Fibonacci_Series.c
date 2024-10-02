#include<stdio.h>

int fib( int n);

int main(){

    int n;
        printf("\nFibonacci Series\n");

        printf("\nEnter the number of the term from where you want to start the series :- ");
       //**Disclamer : This programme will only print the series to the 10yh term**
        scanf("%d", &n);
        
    while(n<=10){  
        printf("\nThe %dth number of the Fibonacci Series is %d\n", n, fib(n));
        n++;
    }
    return 0;
}


int fib( int n){
    if(n==1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}