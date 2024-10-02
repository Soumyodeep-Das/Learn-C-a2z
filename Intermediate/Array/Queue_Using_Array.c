#include<stdio.h>
#include<stdlib.h>

int rear=-1, front=-1;

void Insert( int arr[], int);
int Delete( int arr[]);
void Travel( int arr[]);

int main(){
    printf("\nWelcome to the programme 'Queue using Array'\n");
    int n=9, key, val, Q[10];

    do{
    printf("\nChoose the index of the operation which you want to do :- \n");
    printf("\n01. Insertion.");
    printf("\n02. Deletion.");
    printf("\n03. Traversal.");
    printf("\n04. Exit the Programme.");
    printf("\n\nEnter :- ");
    scanf("%d", &n);
    printf("\n");
    
    switch (n)
    {
    case 1:
        printf("\nEnter the value to Insert :- ");
        scanf("%d", &key);
        Insert(Q,key);
        break;
    case 2:
        val=Delete(Q);
        printf("\n%d has been deleted from the Queue. \n", val);
        break;
    case 3:
        Travel(Q);
        break;
    case 4:
        printf("\nThank you for using this programme.\nHope you liked it.\n");
        break;
    
    default:
        printf("\nEnter a valid index.\n");
        break;
    }
    }while(n!=4);

    return 0;
}

void Insert( int Q[], int key ){
    if(rear>9){
        printf("\nQueue OverFlow");
    }
    else{
        ++rear;
        Q[rear]=key;
    }   
}

int Delete( int Q[]){
    int value;
    if(rear==front){
        rear=front=-1;
        printf("\nNothing to Delete, Please insert some value first.\n\n");
        exit(0);
    }
    else{
        front++;
        value=Q[front];
        return(value);
    }
    
}

void Travel( int Q[]){
    int i=front;
    if(rear==front){
        printf("\nNothing to Display.\n");
    }
    else{
        printf("\n");
        while(i!=rear){
            i++;
            printf("%d | ", Q[i]);         
        }
        printf("\n");
    }
}