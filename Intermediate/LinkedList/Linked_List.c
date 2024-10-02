#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};typedef struct Node node;

node *start=NULL;

node* CreateNode()
{
    node *p;
    p=(node*)malloc(sizeof(node));
    p->next = NULL;
    printf("\nEnter the Data / Info :- ");
    scanf("%d", &p->info);
    return (p);
}

void InsertFirst()
{
    node *p;
    p=CreateNode();

    if(start==NULL){
        start = p;
    }
    else{
        p->next=start;
        start=p;
    }

}
void InsertLast()
{
    node *p, *q;
    p=CreateNode();

    if(start==NULL){
        start = p;
    }
    else{
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }

}
void Display()
{   
    node *p;
    p=start;
    while(p!=NULL)
    {
        printf("\nThe entered info is %d\n", p->info);
        // printf("\n|\t%d\t|%p|\n", p->info, p->next);
        p=p->next;
    }
}
void InsertAfterANode( int key ){
    node *p, *q, *r;
    p=CreateNode();
    // printf("\nEnter the after which you want to add a Node :- ");
    // scanf("%d");
    if(start==NULL){
        p=start;
    }
    else{
        q=start;
        while(q!=NULL && q->info!=key){
            r=q;
            q=q->next;
        }
        if(q!=NULL){
            p->next=q->next;
            q->next=p;
        }
        else{
            r->next=p;
        }
    }
}
void InsertBeforeANode( int key ){
    node *p, *q, *r;
    p=CreateNode();
    if(start==NULL)
    p=start;
    else{
        q=start;
        while(q!=NULL && q->info!=key){
            r=q;
            q=q->next;
        }
        if(q!=NULL){
            p->next=q;
            r->next=p;
        }
        else
        r->next=p;
    }
}
void DeleteTheFirstNode(){
    node *p, *q;
    if(start==NULL){
        printf("\nThere isn't anything for deletion");
    }
    else{
        q=start;
        /*p=q->next;
        start=p;(an alternative)*/
        start=q->next;
        free(q);
    }
}
void DeleteTheLastNode(){
    node *p, *q;
    if(start==NULL){
        printf("\nThere isn't any node for deletion");
    }
    else{
        q=start;
        while(q->next!=NULL){
            p=q;
            q=q->next;
        }
        p->next=NULL;
        free(q);
    }
}
void DeleteAParticularNode( int key ){
    node *q, *r;
    if(start==NULL){
        printf("\nThere isn't any node for deletion");
    }
    else{
        q=start;
        while(q!=NULL && q->info!=key){
            r=q;
            q=q->next;
        }
        if(q!=NULL){
            r->next=q->next;
            free(q);
        }
    }
}
void BackTraversal(){
    node *p, *q, *r;
    p=start;
    q=p->next;
    p->next=NULL;
    while(q!=NULL){
        r=q->next;
        q->next=p;
        p=q;
        q=r;
    }
    r=q=NULL;
    start=p;
}

int main(){

    int n=999, key;
    printf("\n\n\t\t**Welcome to the Linked List source code**");

    do{
        printf("\n\n");
        printf("\n\t\tEnter the Index of operation which you want to do from the list given below :");
        printf("\n\t\t 1. Insert A Node at the First position.");
        printf("\n\t\t 2. Insert A Node at the Last position.");
        printf("\n\t\t 3. Insert A Node After a Particular position.");
        printf("\n\t\t 4. Insert A Node Before a Particular position.");
        printf("\n\t\t 5. Delete the First Node.");
        printf("\n\t\t 6. Delete the Last Node.");
        printf("\n\t\t 7. Delete a Particular Node.");
        printf("\n\t\t 8. Forward Traversal.");
        printf("\n\t\t 9. Backward Traversal.");
        printf("\n\t\t10. Display the Linked List");
        printf("\n\t\t11. Restart the Programme.");
        printf("\n\t\t12. Exit the Programme.");
        printf("\n\n\t\t");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            InsertFirst();
            break;
        case 2:
            InsertLast();
            break;
        case 3:
            printf("\n\t\tEnter the 'Key' value After which you want to Add a new Node.\n");
            InsertAfterANode( key );
            break;
        case 4:
            printf("\n\t\tEnter the 'Key' value Before which you want to Add a new Node.\n");
            InsertBeforeANode( key );
            break;
        case 5:
            DeleteTheFirstNode();
            break;
        case 6:
            DeleteTheLastNode();
            break;
        case 7:
            printf("\n\t\tEnter the 'Key' value of the Node which you want to Delete.\n");
            DeleteAParticularNode( key );
            break;
        case 8:
            Display();
            break;
        case 9:
            BackTraversal();
            break;
        case 10:
            Display();
            break;
        case 12:
            printf("\n\t\tThank You for using this programme..\n");
            break;
        default:
            printf("\n\t\tNo such operation Availabe.\n");
            break;
        }
    }while(n<12);
    return 0/*Good Night🙂🙂🙂*/;
}