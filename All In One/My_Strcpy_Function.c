#include<stdio.h>
#include<string.h>

void strcpyPt( char *str1 , char *str2){
// Using String Pointers as Input
    while(*str2!='\0'){
        *str1=*str2;
        *str1++;
        *str2++;
    }
    *str1='\0';
}    
void strcpyIt(char str1[], char str2[]){
//Using String as Input
    int i=0;
    while(str2[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
}
int main(){
    int i;
    // int j;
    char dst[i];
    char sst[i];
    printf("\nEnter the Destination string :- ");
    scanf("%s", dst);
    printf("\nEnter the Source string :- ");
    scanf("%s", sst);
    
    //strcpyPt( dst, sst );
    strcpyIt( dst, sst );
    printf("\nThe Final String is :- %s \n\n", dst);



    return 0;
}