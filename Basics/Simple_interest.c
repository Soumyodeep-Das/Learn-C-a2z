#include<stdio.h>

int main(){
    int principle, rate, year, interest;
    printf("Enter the principle :- \n");
    scanf("%d", &principle);
    printf("Enter the simple interest rate :- \n");
    scanf("%d", &rate);
    printf("Enter the time period in year :- \n");
    scanf("%d", &year);
    interest=(principle*rate*year)/100;
    printf("The simple interest of this time periode is :- %d \n", interest);
    printf("The total payable amount is :- %d \n", interest+principle);
    return 0;
}