#include<stdio.h>

int main(){
    int n=1, num, sum=0;
    printf("\nSum of a multiplication table\n");

    printf("\nEnter a number :- \n");
    scanf("%d", &num);


    for(n=1; n<=10; n++){
        printf(" \n%d X %d = %d\n", num, n, num*n );
        sum+=num*n;
    }
    
    printf("\nThe sum of the multipliction table is :- %d", sum);

    return 0;
}