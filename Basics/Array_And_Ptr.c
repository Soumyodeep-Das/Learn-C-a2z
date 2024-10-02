#include<stdio.h>

int main(){
    int num[10];
    int i=0;
    int *ptr=&num[0];
    
    num[0]=1;
    num[1]=2;
    num[2]=3;
    num[3]=4;
    num[4]=5;
    num[5]=6;
    num[6]=7;
    num[7]=8;
    num[8]=9;
    num[9]=10;
    
    printf("The address of %dth term before increment is :- %u\n", i+1, ptr);
    printf("The output of %d before increment through pointer arithmatic is :- %d\n\n", i+1, *ptr); 
    ptr=ptr+2;
    printf("The address of %dth term after increment is :- %u\n", i+1, ptr);
    printf("The output of %d after increment through pointer arithmatic is :- %d\n\n", i+1, *ptr); 
    
    
    

    return 0;
}