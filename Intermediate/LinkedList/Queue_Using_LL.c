#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node* next;
}; typedef struct Node node;

node* CreateNode(){
    node* p;
    p=(node*)malloc(sizeof(node));
    printf("\nEnter Value to insert :- ");
    scanf("%d", &p->info);
    p->next=NULL;
    return(p);
}

node* start=NULL;

void Insert();
void Delete();
void Travel();

int main(){
    printf("\nWelcome to the programme 'Queue using Linked List'.");
    int n=9;
    
    do{
        printf("\nChoose the index of the operation which you want to do :- \n");
        printf("\n01. Insertion.");
        printf("\n02. Deletion.");
        printf("\n03. Traversal.");
        printf("\n04. Exit the Programme.");
        printf("\n\nEnter :- "); 
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();            
            break;
        case 3:
            Travel();
            break;
        case 4:
            printf("\nThank You for using this Programme.\nHope you liked this.\n");
            break;        
        default:
            printf("\nPlease enter a valid index.\n");
            break;
        }
    }while(n<4);
    printf("\n");   
    return 0;
}

void Insert(){
    node *p, *q;
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
}

void Delete(){
    node *q;
    if(start==NULL){
        printf("\nNothing to Delete, First insert something.\n");       
    }
    else{
        q=start;
        printf("\n%d has Deleted.\n", q->info);
        start=q->next;
        free(q);
    }
}

void Travel(){
    node *p;
    if(start==NULL){
        printf("\nNothing to Display.\n");
    }
    else{
        p=start;
        while(p!=NULL){
            printf("%d | ", p->info);
            p=p->next;
        }
    }
}