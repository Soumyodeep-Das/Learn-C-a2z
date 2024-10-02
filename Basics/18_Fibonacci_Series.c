#include<stdio.h>
// WAP to display Fibonacci series (i) using recursion, (ii) using iteration.

int fib(int n){
    if(n==0){
        return n;
    }
    else if(n==1){
        return n;
    }
    else if(n>1){
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n, m;
    printf("\nFibonacci Series\n");

    do{
        printf("\nEnter how much terms you want to print :- ");
        scanf("%d", &n);
        printf("\nEnter which method you want to use to print the Fibonacci Series : ");
        printf("\n1 -->> Using Recursion. ");
        printf("\n2 -->> Using Iteration. ");
        printf("\n3 -->> Do you want to Re-Enter the terms number.. ");
        printf("\n4 -->> Do you want to Exit the Programme..\n\n");
        scanf("%d", &m);

    
        if(m==1){
            printf("\nYou have choosed to use Recursion..\n");
            int l=0;
            for(int i=0; i<n; i++){
                l=fib(i);
                printf("%4d", l);
            }
            printf("\n");
        }
        else if(m==2){
            printf("\nYou have choosed to use Iteration..");
            printf("\nYour Fibonacci Series is :- ");
            int a=0, b=1;
            int temp=0;
            for(int i=0 ; i<n; i++){            
                if(i<=1){
                    temp=i;           
                }
                else {
                    temp=a+b;
                    a=b;
                    b=temp;
                }
                printf("%4d", temp);
                }   
                printf("\n");
        }
        else if(m==3){
            printf("\nYou have choosed to Restart the Programme..\n");
        }
        else if(m==4){
            printf("\nYou have choosed to Exit from the Programme..");
            printf("\nThank You for using this programme..\n");
        }
    }while(m==3);
    
    return 0;
}