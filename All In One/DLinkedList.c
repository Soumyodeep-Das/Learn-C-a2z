#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node* prev, *next;
}; typedef struct Node node;

node* start=NULL;

node* CreateNode(){
    node* p;
    p=(node*)malloc(sizeof(node));
    printf("\nEnter info : ");
    scanf("%d", &p->info);
    p->next=NULL;
    p->prev=NULL;
    return(p);
}

void InsertFirst(){
    node *p;
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else{
        p->next=start;
        start=p;
    }
}

void InsertLast(){
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
        p->prev=q;
    }
}

void InAfter(int key){
    node *p, *q, *r;
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else{
        q=start;
        while(q!=NULL&&q->info!=key){
            r=q;
            q=q->next;
        }
        
        if(q!=NULL){
            p->next=q->next;
            q->next=p;
            p->prev=q;
            (q->next)->prev=p;
        }
        else{
            r->next=p;
            p->prev=r;
        }
    }
}

void InBefore(int key){
    node *p, *q, *r;
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else{
        q=start;
        while(q!=NULL&&q->info!=key){
            r=q;
            q=q->next;
        }
        if(q!=NULL){
            r->next=p;
            p->prev=r;
            p->next=q;
            q->prev=p;
        }
        else{
            r->next=p;
            p->prev=r;
        }
    }
}

void DeleteFirst(){
    node *p, *q, *r;
    if(start==NULL){
        printf("\nNothing to delete");
    }
    else{
        p=start;
        start=start->next;
        start->prev=NULL;
        free(p);
    }
}

void DeleteLast(){
    node *p, *q, *r;
    if(start==NULL){
        printf("\nNothing to delete");
    }
    else{
        q=start;
        while(q->next!=NULL){
            r=q;
            q=q->next;
        }
        r->next=NULL;
        free(q);
    }
}

void DeletePerticular(int key){
    node *p, *q, *r;
    if(start==NULL){
        printf("\nNothing to delete");
    }
    else{
        q=start;
        while(q!=NULL&&q->info!=key){
            r=q;
            q=q->next;
        }
        if(q!=NULL){
            p=q->next;
            r->next=q->next;
            p->prev=r;

        }
        else{
            printf("\nkey not found");
        }
        free(q);
    }
}

void ReverseList(){
    node *p, *q, *r;
    p=start;
    q=p->next;
    p->next=NULL;
    while(q!=NULL){

    }
}
int main(){
    
    return 0;
}