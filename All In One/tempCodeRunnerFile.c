#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include string.h for strcpy function

struct student {
    char name[10];
    char dept[10];
};

int factorial(int num){
    if(num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main(){
    printf("Hello World\n");

    int num = 5;
    // printf("NUM : %d", num/3);
    // printf("%d", factorial(5));

    struct student std;

    // Use strcpy to copy string literals into character arrays
    strcpy(std.name, "Soumyodeep");
    strcpy(std.dept, "CMSA");

    printf("Name: %s\n", std.name);
    printf("Department: %s\n", std.dept);

    printf("\n");
    return 0;
}
