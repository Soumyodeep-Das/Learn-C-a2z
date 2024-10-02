#include<stdio.h>

int main(){
    
    int num, a, sum=0, t;

    printf("\nEnter a number :- ");
    scanf("%d", &num);

    t=num;
    while(num!=0){
        a=num%10;
        num=num/10;
        sum=sum*10+a;

    }
    if(t==sum){
        printf("Entered number is Polindrom\n");
    }
    else
        printf("Entered number is not a Polindrom\n");
    return 0;
}