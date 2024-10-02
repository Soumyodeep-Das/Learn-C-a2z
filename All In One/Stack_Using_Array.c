#include<stdio.h>
#define max 20

struct STACK{
    int a[max];
    int top;
};typedef struct STACK stack;


void push(stack, int);
int pop(stack);
void display(stack);

int main(){
    printf("\n\tWelcome to the programme 'Stack using Array'.\n");
    int n, key;
    stack s;
    
    do{
        printf("\nEnter the index value of the operation you want to do from the given list :-\n");
        printf("\n1. Push a value into the stack.");
        printf("\n2. Pop a value from the stack.");
        printf("\n3. Display the Stack");
        printf("\n4. Repeat the programme.");
        printf("\n5. Exit the programme.");
        printf("\n\n");
        scanf("%d", &n);
        printf("\n");

        switch (n)
        {
        case 1:
            printf("\nEnter the value to be PUSHed into the Stack :- ");
            scanf("%d", &key);
            push(s, key);
            
            
            break;
        case 2:
            pop(s);                                                   
            break;
        case 3:
            display(s);
            break;
        case 4:
            printf("\nRepeating the Programme\n");
            break;
        
        default:
            break;
        }
    }while(n<5);
    return 0;
}

void push( stack s, int key ){
    if(s.top==20){
        printf("\nStack Overflow");
    }
    else{
        s.top = s.top + 1 ;
        printf("\n%d", s.top);
        s.a[s.top]=key;
        printf("\n%d", s.a[s.top]);
    }
}

int pop(stack s){
    if(s.top==-1){
        printf("\nStack Underflow");
    }
    else{
        s.top=s.top-1;
    }
    return(s.a[s.top+1]);
}

void display(stack s){
    int i=s.top;
    while(i>= 0){
        printf("\n%d", s.a[i]);
        i--;
    }
}