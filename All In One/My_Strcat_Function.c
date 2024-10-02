#include<stdio.h>
#include<string.h>

void strcatpt( char*, char* );
int main(){
    char str1[50], str2[50];
    int l=0;
    printf("\nEnter First string :- ");
    scanf("%s", str1);
    printf("\nEnter Second string :- ");
    scanf("%s", str2);
    strcatpt( str1, str2 );
    //strcat( str1, str2 );
    printf("\nThe Final String after concatination is : %s\n", str1);
    
    return 0;
}
void strcatpt( char *str1, char *str2 ){
    while(*str2!='\0'){
        if(*str1=='\0'){
            while(*str2!='\0'){
                *str1=*str2;
                str1++;
                str2++;
            }
        }
        else{
            str1++;
        }
    }
    
    
}