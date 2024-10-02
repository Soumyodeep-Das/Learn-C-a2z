#include<stdio.h>
// divisiblity check , 97
int main(){
    int num;
    printf("Enter a number :- \n");
    scanf("%d", &num);
    int rem=num%97;
    if(rem==0){
        printf("The number is divisable by 97\n");
        printf("And the remainder is %d\n", num%97);
    }
    else{
        printf("The number is not divisable by 97\n");
        printf("And the remainder is %d\n", num%97);
    }
    return 0;
}