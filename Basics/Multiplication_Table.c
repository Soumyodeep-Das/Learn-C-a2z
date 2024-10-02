#include<stdio.h>

int main(){
    printf("Multiplication Table\n");
    int num, n=1;
    printf("\nEnter a number :- ");
    scanf("%d", &num);

                // While_Loop

//     while(n<=10){
//          printf(" \n%d X %d = %d\n", num, n++, num*n );
//      }

                // Do_While_loop

//      do{
//          printf(" \n%d X %d = %d\n", num, n++, num*n );
//      }while(n<=10);

                // For_Loop

        for(n=1; n<=10 ; n++){
            printf(" \n%d X %d = %d\n\n", num, n, num*n );
        }

    return 0;
}