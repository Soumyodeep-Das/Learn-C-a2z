#include<stdio.h>
#include<string.h>

int strlenMod( char str[] ){
    //Using String as Input
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
    
}
int strlenPt( char *str ){
    //Using String Pointer as Input
    int i=0;
    while(*str!='\0'){
        str++;
        i++;
    }
    return i;
}
int main(){
    char s[50];
    int i, j;
    printf("\nThis my version of strlen\n");
    printf("\nEnter a string :- ");
    scanf("%s", s);
    i=strlenMod(s);
    j=strlenPt(s);
    printf("\nThe Final Output is (Using String as Input) :- %d\n\n", i);
    printf("\nThe Final Output is (Using String Pointer as Input) :- %d\n\n", j);

    return 0;
}