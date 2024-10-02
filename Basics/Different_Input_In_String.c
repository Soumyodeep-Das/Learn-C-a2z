#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str[i];
    printf("Enter your name :- ");
    char *ptr=str;
    for(i=0; *ptr!='\n'; i++){
        scanf("%c", &str[i]);
    }
// or this
    // scanf("%s", &str);
    printf("Your typed text is : ");
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n\n");
    // gets(str);
    // puts(str);
    return 0;
}