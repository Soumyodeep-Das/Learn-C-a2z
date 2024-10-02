#include<stdio.h>
#include<stdlib.h>

/*struct Node{
    int leftc, rightc;
};typedef struct Node node;*/
void MaxHeap(int *, int, int);
void HeapSort(int *, int);
void swap(int, int);
void CreateHeap(int arr[], int brr[], int);
void RemoveMax(int brr[], int, int);
void RebuildHeap(int brr[], int);

int main(){
    int n;
    printf("\nEnter how many numbers you want to sort : ");
    scanf("%d", &n);
    printf("\nEnter unsorted numbers into an array : \n");
    int arr[n], brr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nYour entered numbers are : \t");
    for( int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    //n=sizeof(arr)/sizeof(arr[0]);
    //HeapSort(arr, n);
    CreateHeap(arr, brr, n);
    for(int i=n; i>2; i++){
        RemoveMax(brr, i, n);
        RebuildHeap(brr, i-1);
    }
    
    return 0;
}
/*void MaxHeap(int arr[], int n){
    int root=1, i, j, maxheap[n+1];
    maxheap[root]=arr[root];
    for(i=2, j=1; i<=n; i++){
        if(arr[i]>maxheap[j]){
            maxheap[j*2+1]=maxheap[j];
            maxheap[j]=arr[i];
            j++;
        }
        else{
            maxheap[j*2]=arr[i];
        }
    }
    for(i=0, j=1; i<n||j<=n; i++, j++){
        arr[i]=maxheap[j];
    }
    printf("\nCreated Max Heap using entered numbers : ");
    for( int i=0; i<=n; i++){
        printf("%d\t", maxheap[i]);
    }

}*/
/*void MaxHeap(int arr[], int n, int i){
    int root=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[root])
        root=l;
    if(r<n && arr[r]>arr[root])
        root=r;
    if(root!=i){
        swap(arr[i], arr[root]);
        MaxHeap(arr, n, root);
    }
}

void HeapSort(int arr[], int n){
    for(int i=n/2-1; i>=0; i--)
        MaxHeap(arr, n, i);
    for(int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        MaxHeap(arr, i, 0);
    }
    printf("\nSorted numbers are : \t");
    for( int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}*/
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}

void CreateHeap(int arr[], int brr[], int n){
    int i=1, j;
    while(i<=n){
        int x=arr[i];
        brr[i]=x;
        j=i;
    
        while(j>1){
            if(brr[j]>brr[j/2]){
                swap(brr[j], brr[j/2]);
                j=j/2;
            }
            else
                j=1;
        }
        i=i+1;
    }
}
void RemoveMax(int brr[], int i, int n){
    swap(brr[i], brr[n]);
    n=n-1;
}
void RebuildHeap(int brr[], int i){
    if(i==1)
        exit(0);
    else{
        int j;
        j=1;
        int Flag;
        Flag==1;
        while(Flag==1){
            int LC=2*j;
            int RC=2*j+1;
            if(RC<=i){
                if(brr[j]<=brr[LC] && brr[RC]<=brr[LC]){
                    swap(brr[j], brr[LC]);
                    j=LC;
                }
                else if(brr[j]<=brr[RC] && brr[LC]<=brr[RC]){
                    swap(brr[j], brr[RC]);
                    j=RC;
                }
                else
                    Flag==0;
            }
            else{
                if(LC<=i){
                    if(brr[j]<brr[LC]){
                        swap(brr[j], brr[LC]);
                        j=LC;
                    }
                    else
                        Flag==0;
                }
            }

        }
    }
}