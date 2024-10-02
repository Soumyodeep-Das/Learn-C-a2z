#include<stdio.h>
#include<string.h>

int strcmpipt( char*, char* );
int main(){
    char str1[50], str2[50];
    int l=0;
    printf("\nEnter First string :- ");
    scanf("%s", str1);
    printf("\nEnter Second string :- ");
    scanf("%s", str2);
    while(*str1!='\0'){
        if(*str1>97){
                *str1=*str1-32;
            }
        str1++;
    }
    while(*str2!='\0'){
        if(*str2>97){
                *str2=*str2-32;
            }
        str2++;
    }
    
    l=strcmpipt( str1, str2 );
    //l=strcasecmp( str1, str2);
    if(l<0){
        printf("\nThe Second string is greater than the First string\n\n");
    }
    else if(l>0){
        printf("\nThe First string is greater than the Second string\n\n");
    }
    else{
        printf("\nBoth the strings are equal\n\n");
    }
    return 0;
}
int strcmpipt( char*str1, char*str2 ){
    int i=0, j=0;
    char *temp1, *temp2, *s1, *s2;
    temp1 = str1;
    temp2 = str2;
    while(*str1!='\0'){
        i++;
        str1++;
    }
    while(*str2!='\0'){
        j++;
        str2++;
    }
    if(i!=j){
        return (i-j);
    }
    else{
        
        while(i){
            
            if(*temp1!=*temp2){
                return(*temp1-*temp2);
                break;
            i--;
            temp1++;
            temp2++;
            }
        }
        
            if(i==0){
                return 0;
            }
    }
}
Level 1: 1q-abro
Level 2: 1q-analok
Level 3: 1q-avata