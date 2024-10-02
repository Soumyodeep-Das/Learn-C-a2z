#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include string.h for strcpy function

struct student
{
    char name[20]; // Increase size to accommodate longer strings
    char dept[10];
} typedef stu;

int factorial(int num)
{
    if (num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

#define I char;

// call by value
void swapV(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    printf("Inside the swapV function\n");
    printf("a=%d, b=%d\n", a,b);
}

// call by reference
void swapR(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    printf("Inside the swapR function\n");
    printf("a=%d, b=%d\n", *a,*b);
}

int main()
{
    /*printf("Hello World\n");

    int num = 5;
    // printf("NUM : %d", num/3);
    // printf("%d", factorial(5));

    stu std;

    // Use strcpy to copy string literals into character arrays
    strcpy(std.name, "Soumyodeep");
    strcpy(std.dept, "CMSA");

    printf("Name: %s\n", std.name);
    printf("Department: %s\n", std.dept);
*/

    // for (;;) // infinte loop
    // {
    //     printf("Enter choice : ");
    //     char ch;
    //     scanf(" %c", &ch);
    //     switch (ch)
    //     {
    //     case 'y':
    //     case 'Y':
    //         printf("Your response is YES");
    //         break;
    //     case 'n':
    //     case 'N':
    //         printf("Your response is NO");
    //         break;
    //     default:
    //         printf("Invalid Response");
    //         goto skip; // goto statement
    //         break;
    //     }
    //     printf("\n");
    // }
    // skip: 
    // printf("\n"); 

    /*
    int num;
    int *numPointer;
    int **pointerPointer;

    num = 5;
    numPointer = &num;
    pointerPointer = &numPointer;

    printf("Value of num = %d\n", num);
    printf("Value of num = %d\n", *(&num));
    printf("Value of num = %d\n", *numPointer);
    printf("Value of num = %d\n", **pointerPointer);
    printf("Value of numPointer = %u\n", numPointer);
    printf("Value of numPointer = %u\n", *pointerPointer);
    printf("Value of numPointer = %u\n", &num);
    printf("Value of pointerPointer = %u\n", pointerPointer);
    printf("Value of pointerPointer = %u\n", &numPointer);
    */
    /*
    Value of num = 5
    Value of num = 5
    Value of num = 5
    Value of num = 5
    Value of numPointer = 1119231172
    Value of numPointer = 1119231172
    Value of numPointer = 1119231172
    Value of pointerPointer = 1119231176
    Value of pointerPointer = 1119231176
    */



    int a = 5, b = 3;
    printf("Before swapping\n");
    printf("a=%d, b=%d", a, b); 
    printf("\n");
    swapV(a,b);
    printf("After swapping CALL BY VALUE\n");
    printf("a=%d, b=%d", a, b); 
    printf("\n");
    swapR(&a,&b);
    printf("After swapping CALL BY REFERENCE\n");
    printf("a=%d, b=%d", a, b); 
    printf("\n"); 
    printf("\n");
    return 0;
}
