#include<stdio.h>
#include<stdlib.h> 

struct Node{
    int info;
    struct Node* next;
}; typedef struct Node node;

node* start=NULL;

node* CreateNode(){
    node* p;
    p=(node*)malloc(sizeof(node));
    printf("\nEnter info : ");
    scanf("%d", &p->info);
    p->next=NULL;
    return(p);
}

void InsertAtFirst(){
    node* p;
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else{
        p->next=start;
        start=p;
    }
}

void InsertAtLast(){
    node* p, *q;
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

void InsertAfterNode(int key){
    node* p, *q, *r;
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
        }
        else{
            r->next=p;
        }
        
    }
}

void InsertBeforeNode(int key){
    node* p, *q, *r;
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
            p->next=q;
        }
        else{
            r->next=p;
        }
    }
}

void DeleteFirst(){
    node *p;
    if(start==NULL){
        printf("\nList in empty");
    }
    else{
        p=start;
        start=start->next;
        free(p);
    }
}

void Deletelast(){
    node *p, *q;
    if(start==NULL){
        printf("\nList in empty");
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

void DeletePerticular(int key){
    node *p, *q;
    if(start==NULL){
        printf("\nList in empty");
    }
    else{
        q=start;
        while(q!=NULL&&q->info!=key){
            p=q;
            q=q->next;
        }
        if(q!=NULL){
            p->next=q->next;
        }
        free(p);
    }
}

void ReverseList(){
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
    start=p;
    q=r=NULL;
    
}

void Display(){
    node *p;
    p=start;
    while(p!=NULL){
        printf("\n%d", p->info);
        p=p->next;
    }
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
            InsertAtFirst();
            break;
        case 2:
            InsertAtLast();
            break;
        case 3:
            printf("\n\t\tEnter the 'Key' value After which you want to Add a new Node.\n");
            scanf("%d", &key);
            InsertAfterNode( key );
            break;
        case 4:
            printf("\n\t\tEnter the 'Key' value Before which you want to Add a new Node.\n");
            scanf("%d", &key);
            InsertBeforeNode( key );
            break;
        case 5:
            DeleteFirst();
            break;
        case 6:
            Deletelast();
            break;
        case 7:
            printf("\n\t\tEnter the 'Key' value of the Node which you want to Delete.\n");
            scanf("%d", &key);
            DeletePerticular( key );
            break;
        case 8:
            Display();
            break;
        case 9:
            ReverseList();
            Display();
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
    return 0;
}