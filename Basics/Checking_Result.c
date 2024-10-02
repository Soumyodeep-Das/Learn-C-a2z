#include<stdio.h>

int main(){

    printf("Checking Result\n");

    int eng, beng, math, phy, chem, bio;
    printf("Enter your english marks :- \n");
    scanf("%d", &eng);
    printf("Enter your bengali marks :- \n");
    scanf("%d", &beng);
    printf("Enter your mathematics marks :- \n");
    scanf("%d", &math);
    printf("Enter your physics marks :- \n");
    scanf("%d", &phy);
    printf("Enter your chemistry marks :- \n");
    scanf("%d", &chem);
    printf("Enter your biological science marks :- \n");
    scanf("%d", &bio);
    int total=eng+beng+math+phy+chem+bio;
    printf("Your agregate marks is :- %d\n", total);
    float total_parcent=total/6;
    printf("Your agregate parcentage is :- %f\n", total_parcent);

    if(total_parcent>40){
            if(eng>33 && beng>33 && math>33 && phy>33 && chem>33 && bio>33){
             printf("You have passed the exam\n");
        }
    }
    else{
        printf("You have failed in this exam\n");
    }



    return 0;
}