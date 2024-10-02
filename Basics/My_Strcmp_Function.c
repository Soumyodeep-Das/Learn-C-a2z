#include<stdio.h>
int strcmppt( char*, char* );
int main(){
    char str1[50], str2[50];
    int l=0;
    printf("\nEnter First string :- ");
    scanf("%s", str1);
    printf("\nEnter Second string :- ");
    scanf("%s", str2);
    l=strcmppt( str1, str2 );
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
int strcmppt( char*str1, char*str2 ){
    int i=0, j=0;
    char *temp1, *temp2;
    temp1=str1;
    temp2=str2;
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
                return (*temp1-*temp2);
                break;
            }
            i--;
            temp1++;
            temp2++;           
        }
            if(i==0){
                return 0;
            }
    }
            
}