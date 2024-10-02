#include<stdio.h>
#include<stdlib.h>

struct DoublyNode{
    int info;
    struct DoublyNode *prev, *next;
};typedef struct DoublyNode dnode;

dnode *CreateNode(){
    dnode *p;
    p=(dnode*)malloc(sizeof(dnode));
    p->next=NULL;
    p->prev=NULL;
    printf("\nEnter data/info :- ");
    scanf("%d", &p->info);
    return(p);
}

dnode *start;

/*dnode* LIST(int n)
{
	dnode *p,*q;
	while(n)
	{
		p=CreateNode();
		if (start==NULL)
		{
			start=p;
		}
		else //  there are existing list
		{
			q=start;
			while (q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
			p->prev=q;
		}
		n--;
	}
}*/

void InsertAtFirst(){
    dnode* p, *q;
    
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else{
        q=start;
        p->next=q;
        p->prev=NULL;
        start=p;
    }
}

void InsertAtLast(){
    dnode *p, *q;
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

void InsertAfterANode( int key ){
    dnode *p, *q, *r;
    p=CreateNode();
    q=start;
        while(q!=NULL && q->info!=key){
            q=q->next;
        }
        if(q!=NULL){
            r=q->next;
            q->next=p;
            p->prev=q;
            p->next=r;
            r->prev=p;
            
        }
        else
	{
		printf ("No such node found !!!");
	}
}

void InsertBeforeANode( int key ){
    dnode *p, *q, *r;
    p=CreateNode();
    if(start==NULL){
        start=p;
    }
    else {
        q=start;
        while(q!=NULL && q->info!=key){
            q=q->next;
        }
        if(q!=NULL){
            r=q->prev;
            r->next=p;
            p->prev=r;
            q->prev=p;
            p->next=q;
        }
    }

}

void DeleteFirstNode(){
    dnode *q,*r;
    if(start==NULL){
        printf("\nNo such Element available for Deletion.");
    }
    else{
        q=start;
        r=q->next;
        r->prev=NULL;
        start=r;
        free(q);
    }
}

void DeleteLastNode(){
    dnode *p,*q;
    if(start==NULL){
        printf("\nNo such Element available for Deletion.");
    }
    else{
        q=start;
        while(q->next!=NULL){
            q=q->next;
        }
        p=q->prev;
        p->next=NULL;
        free(q);
    }
}

void DeleteAParticularNode( int key ){
    dnode *p,*q,*r;
    q=start;
    while(q!=NULL && q->info!=key){
        q=q->next;
    }
    if(q!=NULL){
        p=q->prev;
        r=q->next;
        p->next=r;
        r->prev=p;
        printf ("\n%d is deleted ",q->info);
        free(q);
    }
    else
	{
		printf ("No such node found !!!");
	}
}

void display(){
    dnode *p;
    p=start;
    printf("\nThe data/info into the Node is :\n");
    while(p!=NULL){
        printf("%d\t", p->info);
        p=p->next;
    }
    printf("\n");
}

void ForwardTraversal(){
    dnode *p;
    p=start;
    printf("\nThe data/info in the Forward order is :\n");
    while(p!=NULL){
        printf("%d\t", p->info);            
        p=p->next;
    }
    printf("\n");
}

void BackTraversal(dnode *head){
    /*dnode *p,*q, *r;
    p=start;
    
    while(p->next!=NULL){
        p=p->next;
        q=p;
    }
    printf("\nThe data/info in the Reverse order is :\n");
    while(q!=NULL){
        printf("%d\t", q->info);  
        q=q->prev;
    }
    printf("\n");*/
    dnode *temp;
    temp=start;
    while(temp->next != NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("%d\t", temp->info);
        temp=temp->prev;
    }

}
// incomplete
/*void reverseLL(dnode *start){
    dnode *temp, *current;
    current->next=NULL;
    temp=start;
    while(temp->next!=NULL){
        current->next=current;
        current->prev=temp;
        temp=temp->next;
        
    }
    current->prev=NULL;
}*/



int main(){
    start=NULL;
    printf("\n\n\t\tWelcome to the programme 'Doubly Linked List' \n");
    int n=999, key, m;
    /*printf("\nEnter how much nodes you want to create :- ");
    scanf("%d", &m);
    LIST(m);*/
    do{
        printf("\nEnter the Index of the Operation which you want to do :- ");
        printf("\n01. Insert a Node at the First position.");
        printf("\n02. Insert a Node at the Last position.");
        printf("\n03. Insert a Node After a Node.");
        printf("\n04. Insert a Node Before a Node.");
        printf("\n05. Delete the First Node.");
        printf("\n06. Delete the Last Node.");
        printf("\n07. Delete a Particular Node.");
        printf("\n08. Traverse Forward the list.");
        printf("\n09. Traverse Backward the list.");
        printf("\n10. Display the List.");
        printf("\n11. Repeat the Programme.");
        printf("\n12. Exit the Programme.");
        printf("\n\n");
        scanf("%d", &n);
        printf("\n");
        switch (n)
        {
        case 1:
            InsertAtFirst();
            display();
            break;
        case 2:
            InsertAtLast();
            display();
            break;
        case 3:
            printf("\nEnter the key value :- ");
            scanf("%d", &key);
            InsertAfterANode( key );
            display();
            break;
        case 4:
            printf("\nEnter the key value :- ");
            scanf("%d", &key);
            InsertBeforeANode( key );
            display();
            break;
        case 5:
            DeleteFirstNode();
            display();
            break;
        case 6:
            DeleteLastNode();
            display();
            break;
        case 7:
            printf("\nEnter the key value :- ");
            scanf("%d", &key);
            DeleteAParticularNode( key );
            display();
            break;
        case 8:
            ForwardTraversal();
            break;
        case 9:
            BackTraversal();
            break;
        case 10:
            display();
            break;
        case 11:
            printf("\nRepeating the Programme..");
            display();
            break;
        case 12:
            printf("\nThank you for using this programme.");
            printf("\nHope you like it.\n");
            break;
        default:
            break;
        }
    }while(n<12);
    
    return 0;
}