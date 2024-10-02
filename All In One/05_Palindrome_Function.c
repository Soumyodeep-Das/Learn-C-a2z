#include<stdio.h>
#include<string.h>
// Write a function that checks whether a given string is Palindrome or not. Use this function
// to find whether the string entered by user is Palindrome or not.

void Palindrome( char a[]);
int main(){
    char str[50];
    printf("\nEnter a String :- ");
    scanf("%s",str);
    Palindrome(str);

    return 0;
}
void Palindrome( char a[]){
    int i=0, h=strlen(a)-1;
    while(h>i){
        if(a[i++]!=a[h--]){
        printf("%s is not a Palindrome Number..", a);
        return;
        }        
    }
    printf("%s is a Palindrome Number..", a);
}