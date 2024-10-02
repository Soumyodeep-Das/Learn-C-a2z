#include <stdio.h>
#include <stdlib.h>
struct node{
    int value,row,column;                     
    struct node *next;           
};
struct node *front;
struct node *rear;
void createnode(int v,int r,int c){  
    struct node *ptr;        
    ptr=(struct node *)malloc(sizeof(struct node));  
    if(ptr==NULL){  
        printf("\nOVERFLOW");  
        return;  
    }  
    else{    
        ptr->value=v;
        ptr->row=r;
		ptr->column=c; 
        if(front==NULL){  
            front=ptr;  
            rear=ptr;   
            front->next=NULL;  
            rear->next=NULL;  
        }  
        else{  
            rear->next=ptr;  
            rear=ptr;  
            rear->next=NULL;  
        }	  
    } 
}
void display(){
    struct node * tmp;
    tmp=front;
    printf("the location of non zero values are in");
    while(tmp!=NULL){
        printf("\nvalue=%d",tmp->value);
        printf(",row=%d",tmp->row);
        printf(",column=%d",tmp->column);
        tmp=tmp->next;
    }
}   
int main(){
    int a[100][100],r,c,i,j;
    printf("Enter no of rows: ");
    scanf("%d",&r);
    printf("Enter no of columns: ");
    scanf("%d",&c);
    printf("please enter your contents for sparse matrix\n");
    for (i=0;i<r;i++)
        for (j=0;j<c;j++){
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("Entered matrix: \n");
    for (i=0;i<r;i++)
        for (j=0;j<c;j++){
            printf("%d  ",a[i][j]);
            if (j==c-1)
                printf("\n");
        }    
    for (i=0;i<r;i++)
        for (j=0;j<c;j++){
            if(a[i][j]!=0)
                createnode(a[i][j],i+1,j+1);
        }
    display();   
    return 0;
}














