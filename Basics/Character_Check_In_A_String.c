#include<stdio.h>
void pre( char *str, char c){
    char *ptr=str;
    while( *ptr!='\0'){
        if(*ptr==c){
            printf("\nThis character is present in this text\n");
            break;
        }
        // else{
        //     printf("\nThis character is not present in this text\n");
        // }
        ptr++;
    }
}

int main(){
    char i;
    printf("\n\nCharacter Presense Test\n\n");
    printf("The mirror was so reflecting that the dear got fear \nfrom that and lossed his control from his mind \n");
    char str[]="The_mirror_was_so _reflecting_that_the_dear_got_fear_from_that_and_lossed_his_control_from_his_mind";
    printf("\nEnter which character's presense you want to check :- ");
    scanf("%c", &i);
    pre( str, i);
    return 0;
}