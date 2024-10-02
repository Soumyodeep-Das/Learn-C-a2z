#include<stdio.h>

int main(){
    int n=1, num, sum=0;
    printf("\nSum of first n natural numbers\n");

    printf("\nEnter a number :- ");
    scanf("%d", &num);

    for(n=1; n<=num; num--){
        printf("\n%d\n", num);
        sum+=num;
    }
   
    printf("\nThe Sum of the natural numbers is :- %d", sum);

    return 0;
}