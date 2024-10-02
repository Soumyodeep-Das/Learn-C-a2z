#include<stdio.h>

int main(){
    printf("Tax_Calculation\n");
    float income;
    printf("\nEnter your annual income in lakhs :- ");
    scanf("%f", &income);
    if(income>=2.5 && income<5 ){
        printf("\nYour tax is %f ( in lakhs )", income/20);
    }
    if(income>=5 && income<10){
        printf("\nYour tax is %f ( in lakhs )", income/10);
    }
    if(income>=10){
        printf("\nYour tax is %f ( in lakhs )", income/5);
    }
    else{
        printf("\nYou don't have to pay any tax.\n");
    }



    return 0;
}