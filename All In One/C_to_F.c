#include<stdio.h>

int main(){
    int cel;
    printf("Enter the celcius value of a temperature \n");
    scanf("%d", &cel);
    printf("The fahrenheit value of the given temperature %d\n", (cel*9)/5);
    return 0;
}