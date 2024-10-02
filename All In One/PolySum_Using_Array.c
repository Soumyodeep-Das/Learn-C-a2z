#include<stdio.h>

struct Poly{
    int exp, coef;
};typedef struct Poly poly;


int main(){
    printf("\nWelcome to the program 'Sum of two polynomial expressions'. \n");
    int l1, l2, l3, i;
    printf("\nEnter the length of first equation : ");
    scanf("%d", &l1);
    printf("\nEnter the length of second equation : ");
    scanf("%d", &l2);
    poly arr1[l1], arr2[l2];
    printf("\nEnter the first equation :\n");
    for(i=0; i<l1; i++){
        printf("\nEnter Co-efficient : ");
        scanf("%d", &arr1[i].coef);
        printf("Enter Exponant : ");
        scanf("%d", &arr1[i].exp);
    }
    printf("\nEnter the second equation :\n");
    for(i=0; i<l2; i++){
        printf("\nEnter Co-efficient : ");
        scanf("%d", &arr2[i].coef);
        printf("Enter Exponant : ");
        scanf("%d", &arr2[i].exp);
    }
    printf("\nThe first equation is :");
    printf("\n");
    for(i=0; i<l1; i++){
        printf("%dX^%d+", arr1[i].coef, arr1[i].exp);
    }
    printf("\nThe second equation is :");
    printf("\n");
    for(i=0; i<l2; i++){
        printf("%dX^%d+", arr2[i].coef, arr2[i].exp);
    }
    // Doing sum
    if(l1>=l2){
        l3=l1;
    }
    else{
        l3=l2;
    }
    poly arr3[l3];
    int e1, e2;
    e1=e2=0;
    for(i=0; i<l3; i++){
        if(arr1[e1].exp==arr2[e2].exp){
            arr3[i].coef=arr1[e1].coef+arr2[e2].coef;
            arr3[i].exp=arr2[e2].exp;
            e1++, e2++;
        }
        else if(arr1[e1].exp>arr2[e2].exp){
            arr3[i].coef=arr1[e1].coef;
            arr3[i].exp=arr1[e1].exp;
            e1++;
        }
        else{
            arr3[i].coef=arr2[e2].coef;
            arr3[i].exp=arr2[e2].exp;
            e2++;
        }

    }
    printf("\nSum of the equations is :");
    printf("\n");
    for(i=0; i<l3; i++){
        printf("%dX^%d+", arr3[i].coef, arr3[i].exp);
    }
    printf("\n\n");

    return 0;
}