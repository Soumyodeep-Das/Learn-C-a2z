#include<stdio.h>
#include<stdlib.h>

struct PolyNode{
    int coef, expo;
    struct PolyNode *next;
}; typedef struct PolyNode poly;

poly *start = NULL;

poly *CreateNode(){
    poly *p;
    p=(poly*)malloc(sizeof(poly));
    p->next=NULL;
    printf("\nEnter the value of Co-Efficient :- ");
    scanf("%d", &p->coef);
    printf("\nEnter the value of Exponant :- ");
    scanf("%d", &p->expo);
    return(p);
}


poly *InsertAPolyNomialEquation(){
    poly *p, *q;
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else{
        q=start;
        while(q->next!=NULL){
            q=q->next;
        }
        q->next=p;
    }
    return(p);
}

poly *PolyNomialAddition( poly* p, poly* q ){
    poly *a;
    while(p!=NULL && q!=NULL){
        a=CreateNode();
        if(p->expo==q->expo){
            a->coef=p->coef+q->coef;
            a->expo=p->expo;
            p=p->next;
            q=q->next;
        }
        else if(p->expo>q->expo){
            a->expo=p->expo;
            a->coef=p->coef;
            p=p->next;
        }
        else{
            a->coef=q->coef;
            a->expo=q->expo;
            q=q->next;
        }
        if(p!=NULL && q==NULL){
            a->expo=p->expo;
            a->coef=p->coef;
            p=p->next;
        }
        else{
            a->coef=q->coef;
            a->expo=q->expo;
            q=q->next;
        }
    }
    return(a);
}

void display( poly *p )
{   
    p=start;
    while(p!=NULL)
    {
        printf("\nThe Co-Efficient of the Equation is %d\n", p->coef);
        printf("\nThe Exponant of the Equation is %d\n", p->expo);
        p=p->next;
    }
}

int main(){
    printf("\n\t\tWelcome to the programme 'Polynomial addition Using Linked List'\n");
    int n;
    printf("\nEnter how much Equations you want to Calculate :- ");
    scanf("%d", &n);
    poly *p, *q, *r;
    p=InsertAPolyNomialEquation();
    q=InsertAPolyNomialEquation();
    r=PolyNomialAddition( p,  q );
    display(r);
    return 0;
}