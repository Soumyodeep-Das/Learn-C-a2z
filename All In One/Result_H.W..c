#include<stdio.h>

int main(){

    printf("Checking Result\n");

    int eng, cmsa, math, phy;
    printf("\nEnter your English marks :- ");
    scanf("%d", &eng);
    printf("\nEnter your Computer Science marks :- ");
    scanf("%d", &cmsa);
    printf("\nEnter your Mathematics marks :- ");
    scanf("%d", &math);
    printf("\nEnter your Physics marks :- ");
    scanf("%d", &phy);
    
    int total=eng+cmsa+math+phy;
    printf("\nYour agregate marks is :- %d\n", total);
    float total_parcent=total/4;
    printf("\nYour agregate parcentage is :- %.2f\n", total_parcent);
    /* Here %.2f is used to limit the zeros after .*/
    if(total_parcent>30 && total_parcent<=40){
            printf("You have passed the exam.\n");
    }
    else if(total_parcent>40 && total_parcent<=60){
            printf("You have passed the exam.\n");
            printf("With 2nd division. \n");
    }
    else if(total_parcent>60 && total_parcent<=80){
            printf("You have passed the exam\n");
            printf("With 1st division \n");
    }
    else if(total_parcent>80 && total_parcent<=90){
            printf("You have passed the exam.\n");
            printf("With Excellent grade.\n");
    }
    else if(total_parcent>90 && total_parcent<=100){
            printf("You have passed the exam.\n");
            printf("With Outstanding grade.\n");
    }
    else{
        printf("You have failed in this exam.\n");
    }



    return 0;
}