#include<stdio.h>

int main(){
    printf("\nThis is a programme to convert Decimal number to Binary numbers.\n");
    int dec;
    int a[100];
    printf("\nEnter the decimal number :- ");
    scanf("%d", &dec);
    int rem;
    int i=0;
    // this if-else statement has used here as the loop isn't printing the LSB.
    if(dec%2==0){
        a[i]=0;
    }
    else if(dec%2!=0){
        a[i]=1;
    }
    i=i+1;// this step is done because the 'i' has to be incresed by 1 before entering the loop as I want to store the LSB into a[i] and want to start the array from a[i+1].
    while(dec!=1){
        
        dec=dec/2;
        rem=dec%2;
        a[i]=rem;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        printf("%d", a[j]);
    }
    return 0;
}