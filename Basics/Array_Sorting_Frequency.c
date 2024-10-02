#include<stdio.h>

void Bubble_Sort(int a[], int n);
void Print_Freq(int a[], int n);
int main(){
    int a[20], i, n;
    printf("\nHow many numbers do you want to store in the Array : ");
    scanf("%d", &n);
    printf("\nEnter the numbers into the Array : \n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    Bubble_Sort(a, n);
    printf("\nThe sorted Array is :\n");
    for(i=0; i<n; i++){
        printf("%3d", a[i]);
    }
    Print_Freq(a, n);

    return 0;
}
void Bubble_Sort(int a[], int n){
    int i, j, temp, flag=1;
    for(i=0; i<n && flag==1; i++){
        flag=0;
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
    }
}
void Print_Freq(int a[], int n){
    int i=0, k, count=0;
    while(i<n){
        k=a[i], count=0;
        while(a[i+1]==k){
            count++;
            i++;
        }
        printf("\nFrequency of %d is %d\n", k, ++count);
        i++;
    }
}