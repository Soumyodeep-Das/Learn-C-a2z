#include <stdio.h>
#include <stdlib.h>
struct node {
    int num;
    struct node *nextptr;
}*stnode;
void create(int n){
    int i,num;
    struct node *preptr, *newnode;
    if(n>=1){
        stnode=(struct node *)malloc(sizeof(struct node));
        printf("Input data for node 1= ");
        scanf("%d",&num);
        stnode->num=num;
        stnode->nextptr=NULL;
        preptr=stnode;
        for(i=2;i<=n;i++){
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("Input data for node %d= ", i);
            scanf("%d",&num);
            newnode->num=num;
            newnode->nextptr=NULL;	
            preptr->nextptr=newnode;	
            preptr=newnode;   		
        }
        preptr->nextptr=stnode; 		
    }
}
void reverse$count(){
    struct node *tmp;
    struct node *tnt;
    int i,ct=0,j,a;
    if(stnode==NULL){
        printf(" List is empty.");
    }
    else{
        tmp=stnode;
        do{
            tmp=tmp->nextptr;
			ct++;
        }while (tmp!=stnode);
    }
    a=ct;
    printf("\nThe total no. of nodes are %d",ct);
	for(i=0;i<a;i++){
		tnt=stnode;
		for(j=1;j<a-i;j++){
			tnt=tnt->nextptr;
		}
		printf("\nData of node %d = %d",a-i,tnt->num);
	}      
}
void del(int pos){
    struct node *temp=stnode;       
    int i;                    
    if(pos==1){  
        while(temp->nextptr!=stnode)  
            temp=temp->nextptr;   
        temp->nextptr=stnode->nextptr;  
        free(stnode);  
        stnode=temp->nextptr;
    }
    else{
        for(i=1;i<pos-1;i++){
            temp=temp->nextptr;
        }
        struct node *del=temp->nextptr; 
        temp->nextptr=temp->nextptr->nextptr;    
        del->nextptr=NULL;
        free(del);                    
    }
}
void display(){
    struct node *tmp;
    int n=1;
    if(stnode==NULL){
        printf(" No data found in the List yet.");
    }
    else{
        tmp=stnode;
        printf("\n Data entered in the list are:");

        do{
            printf(" \n Data of node %d = %d",n,tmp->num);
            tmp=tmp->nextptr;
            n++;
        }
		while(tmp!=stnode);
    }
}
void ins(int num,int pos){
    int i;
    struct node *fnnode,*tmp;
    fnnode=(struct node*)malloc(sizeof(struct node));
    if(pos==1){
        fnnode->num=num;
        fnnode->nextptr=stnode;
        tmp=stnode;
        while(tmp->nextptr!=stnode){
            tmp=tmp->nextptr;
        }
        tmp->nextptr=fnnode;
        stnode=fnnode;
    }
    else{
        fnnode->num=num;
        fnnode->nextptr=NULL;
        tmp=stnode;
        for(i=1;i<=pos-2;i++){
            tmp=tmp->nextptr;
        }
        if(tmp->nextptr!=NULL){
            fnnode->nextptr=tmp->nextptr;
            tmp->nextptr=fnnode;   
        }
	}
}
int main(){
    int n,d,num,pos;
    stnode=NULL;
    printf(" Input the number of nodes=");
    scanf("%d",&n); 
    create(n);
    reverse$count();
    printf("\nInput the node to be deleted=");
    scanf("%d",&d); 
	del(d); 
    display();
    printf("\nInput the position to be inserted=");
    scanf("%d",&pos);
    printf("\nInput the new node=");
    scanf("%d",&num);
    ins(num,pos);
    display();
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    