#include<stdio.h>
#include<string.h>

void Bubble_Sort(char a[], int n){
    int i, j, flag=1;
    char temp;
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
void Occurence( char str[] , int n){
    char temp;
    int i=0;
    while(i<n){
        temp=str[i];
        int count=0;
        while(str[i+1]==temp){
            i++;
            count++;
        }
    printf("\nThe letter %c is present in this text %d times\n", temp, ++count);
    i++;
    }
    
}

int main(){
    int n=0;
    char str[100];
    printf("\n\nOccurence measurment\n\n");
    printf("Enter a String as Input..\n");  
    scanf("%s", str); 
    n=strlen(str);
    Bubble_Sort(str, n);
    printf("\n");
    Occurence( str, n);
    
    return 0;
}