#include<stdio.h>
  
int fact(int n){
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return(n*fact(n-1));
}

int main(){
    int num=0, loc, temp, sum=0, range;

    printf("\nKrishnamurti Number\n\n");
    
    printf("Enter the range of numbers :- ");
    scanf("%d", &range);
    
    for(int i=0; i<range; i++){
        loc=i;
        while(i>0){
        temp=i%10;
        i=i/10;
        sum=sum+fact(temp);
        }
        i=loc;
        if(sum==loc){
            printf("\n%d is a Krishnamurti Number.\n", loc);
        }
        sum=0;
    }
    
    
    return 0;
}