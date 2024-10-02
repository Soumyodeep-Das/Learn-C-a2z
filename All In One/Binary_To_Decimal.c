#include<stdio.h>

int main(){
    printf("\nThis is a programme to convert Binary numbers into Decimal number.\n");
    int bi[100];
    int num;
    printf("\nEnter how many digits are there in the Binary number : ");
    scanf("%d", &num);
    printf("\nEnter the Binary number : \n");

    for(int i=1; i<=num; i++){
        scanf("%d", &bi[i]);
    }

    int k, n;
    k=num-1;
    n=1;
    int power[9]={1,2,4,8,16,32,64,128,256};
    int dec[100];
    int l=1;
    int z=0;

    while(l<=num){
        dec[l]=bi[n]*power[k];
        z=z+dec[l];
        n++;
        k--;
        l++;
    }
    printf("\n");
    printf("The Decimal number is : %d\n", z);
 
    
    



    
    return 0;
}