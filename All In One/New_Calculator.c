#include<stdio.h>

int main(){
    // Introduction of the programme.
    char o;
    printf("\n**It is a basic calculator**\n");
    printf("\nEnter the oparation you want to do :- ");
    printf("\n'p' for Addition \n'm' for Minus \n'i' for Multiplication \n'd' for Division\n");
    scanf("%c", &o);
    // Getting the input about the operator.
    printf("\nSo you want to do ");
    if(o=='p'){
        printf("Addition");
    }
    if(o=='m'){
        printf("Minus");
    }
    if(o=='i'){
        printf("Multiplication");
    }
    if(o=='d'){
        printf("Division");
    }
    // Getting the count about the numbers.
    int a;
    printf("\nEnter how many numbers you want to calculate :- ");
    scanf("%d", &a);
    // Starting of the calculation process.
    // Addition.
    int num[10];
    if(o=='p'){
        printf("\nEnter the numbers you want to calculate :- ");
    for(int i=0; i<a; i++){
        scanf("%d", &num[i]);
    }
    int sum = 0;

    for(int j=0; j<a; j++){
        sum = sum + num[j];
    }
    printf("Addition of these numbers is :- %d", sum);

    }
    // Substraction
    if(o=='m'){
        printf("\nEnter the numbers you want to calculate :- ");
    for(int i=0; i<a; i++){
        scanf("%d", &num[i]);
    }
    int j=0;
    int sum = num[j];

    while(j<a){
        sum = sum - num[j+1];
        j--;
    }
    printf("Substraction of these numbers is :- %d", sum);
    
    }
    // Multiplication
    if(o=='i'){
        printf("\nEnter the numbers you want to calculate :- ");
    for(int i=0; i<a; i++){
        scanf("%d", &num[i]);
    }
    int sum = 0;

    for(int j=0; j<a; j++){
        sum = sum * num[j];
    }
    printf("Multiplicaton of these numbers is :- %d", sum);
    
    }
    // Division
    if(o=='d'){
        printf("\nEnter the numbers you want to calculate :- ");
    for(int i=0; i<a; i++){
        scanf("%d", &num[i]);
    }
    int sum = 0;

    for(int j=0; j<a; j++){
        sum = sum / num[j];
    }
    printf("Division of these numbers is :- %d", sum);
    
    }
    return 0;
}