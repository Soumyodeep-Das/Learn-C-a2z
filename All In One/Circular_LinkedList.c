#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *next;
};typedef struct Node node;

node *start = NULL;
node *Last = NULL;

node *CreateNode(){
    node *p;
    p=(node*)malloc(sizeof(node));
    printf("\nEnter info/data :- ");
    scanf("%d", &p->info);
    p->next=NULL;
}


void CircularInsertion(){
    node *p, *q;
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else{
        q=start;
        while(q->next!=Last){
            q=q->next;
        }
        q->next=p;
        Last=p->next;
    }
}

void Display(){
    node *q;
    q=start;
    while(q!=Last){
        printf("\nEntered info/data :- %d\n", q->info);
        q=q->next;
    }
}


int main(){
    int n;
    printf("\nEnter how many numbers you want to enter :- ");
    scanf("%d", &n);
    
    for( int i=0; i<n ; i++){
        CircularInsertion();
    }
    Display();
    
    return 0;
}