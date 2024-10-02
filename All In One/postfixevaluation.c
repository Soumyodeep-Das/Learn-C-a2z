#include<stdio.h>
#include<ctype.h>
int stack[20];
int top = -1;
void push(int x){
    stack[++top]=x;
}
int pop(){
    if(top==-1)
        return -1;
    else
        return stack[top--];
}
int main(){
    char exp[20];
    char *e;
    int n1,n2,n3,num;
    printf("Enter the expression= ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isdigit(*e)){
            num=*e-48;
            push(num);
        }
        else{
            n1=pop();
            n2=pop();
            switch(*e){
                case '+':
                {
                    n3=n1+n2;
                    push(n3);
                    break;
                }
                case '-':
                {
                    n3=n2-n1;
                    push(n3);
                    break;
                }
                case '*':
                {
                    n3=n1*n2;
                    push(n3);
                    break;
                }
                case '/':
                {
                    n3=n2/n1;
                    push(n3);
                    break;
                }
            }

        }
        e++;
    }
    printf("\n%d",pop());
    return 0;
}
