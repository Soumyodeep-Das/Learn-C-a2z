#include<stdio.h>

struct Poly{
    int exp, coef;
    char sign;
};typedef struct Poly poly;


int main(){
    int n, i;
    printf("\nEnter how much element would the equation have : ");
    scanf("%d", &n);
    poly eq[n];
    // Taking input
    for(i=0; i<n; i++){
        printf("\nEnter Co-efficient : ");
        scanf("%d", &eq[i].coef);
        printf("\nEnter Exponant : ");
        scanf("%d", &eq[i].exp);
        if(i<n-1){  // To avoid to scan the last sign after the numbers          
            printf("\nEnter Sign : ");
            scanf(" %c", &eq[i].sign);
        }        
    }
    // Displaying the expression
    printf("\n");
    for(i=0; i<n; i++){
        printf("%dX^%d", eq[i].coef, eq[i].exp);
        if(i<n-1)   // To avoid to print the last sign after the numbers
            printf("%c", eq[i].sign);
    }
    printf("\n");
    return 0;
}