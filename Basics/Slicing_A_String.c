#include<stdio.h>
#include<string.h>

void slice( char *str, int m, int n ){
    int i=0;
    
    while((i+m)<n){
        str[i]=str[i+m];
        i++;
    }
    str[i]='\0';

}
int main(){
    int i, m, n;
    printf("\nEnter a string for slicing :- ");
    char s[i];
    scanf("%s", s);
    printf("From which letter do you want to cut the string :- ");
    scanf("%d", &m);
    printf("Till which letter do you want to cut the string :- ");
    scanf("%d", &n);
    slice(s, (m+1), n);
    
    printf("%s", s);
    return 0;
}