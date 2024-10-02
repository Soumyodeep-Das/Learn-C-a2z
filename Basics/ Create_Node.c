 #include<stdio.h>
 #include<stdlib.h>

struct node
 {
    int info;
    struct node *next;
 };typedef struct node Node;

Node *CreateNode()
 {
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    printf("\n Enter the value :- ");
    scanf("%d", &p->info);
    p->next=NULL;
    return (p);
 }/*
 // insert at begining
 void insertionBegin()
 {
    Node *p, *q;
    p=CreateNode();
    if(start==NULL)
        start=p;
    else
    {
        p->next=start;
        start=p;
    }
 }
  // insert at ending
 void insertioEnd()
 {
    Node *p, *q;
    p=CreateNode();
    if(start==NULL)
        start=p;
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
 }
  // insert after a node
 void insertionAfter( int key )
 {
    Node *p, *q, *r;
    p=CreateNode();
    if(start==NULL)
        start=p;
    else
    {
        q=start;
        while(q->info!=key && q!=NULL)
        {
            r=q;
            q=q->next;
            if(q!=NULL)
            {
                p->next=q->next;
                q->next=p;
            }
            else
            {
                r->next=p;
            }
        }
    }
 }
 // delete node
 void deleteNode( int key )
 {
     Node *p, *q;
     if(start==NULL)
     {
        printf("\nNo such Element");
     }
     else{
         q=start;
         while(q!=NULL && q->info!=key)
         {
             p=q;
             q=q->next;
         }
         p->next=q->next;
         free(q);
     }
 }*/
 // display
 void display()
 {  
     Node *p;
     p=start;
     while(p!=NULL){
         print p->info;
         p=p->next;
     }
 }
 int main(){
    printf("Create Node\n");

    Node *start=NULL:
    display();
    return 0;
 }
 
 
 
