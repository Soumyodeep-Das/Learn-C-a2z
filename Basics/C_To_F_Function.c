#include<stdio.h>

float temparature ( float celcius );


int main(){
    printf("Celcius to Fahrenheit function\n");

    float c, f;
    printf("Enter a Celcius temparature :- ");
    scanf("%f", &c);

    printf("\n%f Celcius is %f in Fahrenheit scale\n", c, temparature(c));

    return 0;
}

float temparature ( float celcius ){
    float fahrenheit =  (celcius*9)/5;
    return fahrenheit;
}