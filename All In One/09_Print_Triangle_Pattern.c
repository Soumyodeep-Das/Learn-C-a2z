#include<stdio.h>
/*WAP to print a triangle of stars as follows (take number of lines from user):
    *
   ***
  ***** 
 *******
**********/
int main(){
    int num;
    printf("Enter how many rows you want to print :- ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        
        for( int j=num-i; j>0; j--){
            printf(" ");
        }
        for( int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}