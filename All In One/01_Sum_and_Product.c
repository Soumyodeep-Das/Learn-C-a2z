#include<stdio.h>
//WAP to print the sum and product of digits of an integer.
int main(){
    int num, rem, sum=0, pro=1;
    printf("\nEnter a Number : ");
    scanf("%d", &num);
    int temp=num;
    for(int i=0; num>0; i++){
        rem=num%10;
        num=num/10;
        sum+= rem;
    }
    printf("\nThe sum of digits of the number is :- %d\n", sum);
    for(int j=0; temp>0; j++){
        rem=temp%10;
        temp=temp/10;
        if(rem!=0){
            pro = pro * rem;
        }
        
    }
    printf("\nThe product of digits of the number is :- %d\n", pro);


    return 0;
}