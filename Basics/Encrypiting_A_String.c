#include<stdio.h>

int main(){
    printf("\n\n");
    int i;
    char msg[i];
    char *ptr=msg;
    printf("Enter your messege for encryption :- ");
    // while( *ptr!='\n'){
    //     scanf("%c", *ptr);
    //     ptr++;
    // }
    scanf("%s", msg);
    printf("Your encrypted messege is :- ");
    while( *ptr!='\0'){
        printf("%c", *ptr+1);
        ptr++;
    }

    printf("\n\n");
    return 0;
}