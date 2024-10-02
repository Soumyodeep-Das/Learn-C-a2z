#include<stdio.h>

/*WAP to perform following actions on an array entered by the user :
i)   Print the even-valued elements
ii)  Print the odd-valued elements
iii) Calculate and print the sum and average of the elements of array
iv)  Print the maximum and minimum element of array
v)   Remove the duplicates from the array
vi)  Print the array in reverse order
vii) Sort the array in ascending the array
The program should present a menu to the user and ask for one of the options. The menu
should also include options to re-enter array and to quit the program.*/
void sort( int arr[], int n){
    int flag=1, temp;
    for(int b=0 ; b<n && flag==1; b++){
        flag=0;
        for(int i=0; i<n-b-1; i++){
            if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            flag=1;
            }
       }
        
    }
}
int main(){
    int arr[50], m=0, p, k, n, no=0, avg=0, sum=0, temp, flag=1;

    printf("\nWelcome to the programme about Array..");
    
    do{printf("\nEnter how long Array you want to enter (in number) : ");
    scanf("%d", &n);
    printf("\nEnter your Array :\n");
    for(int a=0 ; a<n; a++){
        scanf("%d", &arr[a]);
    }
    printf("Your entered Array is :\n");
    
    for(int i=0; i<n; i++){
        printf("%4d", arr[i]);
    }
    printf("\n\n");
    printf("Now select which output you want to get from this programme :-\n");
    printf("\n");
    printf(" 1 -->> Print the even-valued elements.\n");
    printf(" 2 -->> Print the odd-valued elements.\n");
    printf(" 3 -->> Calculate and print the sum and average of the elements of array.\n");
    printf(" 4 -->> Print the maximum and minimum element of array.\n");
    printf(" 5 -->> Remove the duplicates from the array.\n");
    printf(" 6 -->> Print the array in reverse order.\n");
    printf(" 7 -->> Print the array in Ascending order.\n");
    printf(" 8 -->> Do you want to Re-Enter the Array. (y/n)\n");
    printf(" 9 -->> Do you want to Exit. (e)\n");
    
    scanf("%d", &no);
    if(no==1){
        printf("You choose to Print the even-valued elements..\n");
        printf("The Even numbers of the Entered Array are :\n");
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                printf("%4d", arr[i]);
            }
        }
        printf("\n");
    }
    else if(no==2){
        printf("You choose to Print the odd-valued elements..\n");
        printf("The Odd numbers of the Entered Array are :\n");
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                printf("%4d", arr[i]);
            }
        }
        printf("\n");
    }
    else if(no==3){
        printf("You choose to Calculate and print the sum and average of the elements of array..");       
        for(int i=0; i<n; i++){
            sum+=arr[i];
            avg=sum/n;
        }
        printf("\nThe Sum of the Elements of the Entered Array is :- %d\n", sum);
        printf("\nThe Avarage of the Elements of the Entered Array is :- %d\n", avg);
    }
    else if(no==4){
        sort(arr, n);
        printf("\nYou choose to Print the maximum and minimum element of array : \n");
        printf("The Maximum number of the Array is :- %d\n", arr[n-1]);
        printf("And, The Minimum number of the Array is :- %d\n", arr[0]);
    }
    else if(no==5){
        printf("\nYou choose to Remove the duplicates from the array..\n");
        sort(arr, n);
        while(m<n){
            k=arr[m];
            while(arr[m+1]==k){
                m++;               
            }
            printf("%d\n", k);           
            m++;           
        }
        printf("\n");
    }
    else if(no==6){
        printf("You choose to Print the array in reverse order..\n");
        printf("The Reverse order of your entered Array is : \n");
        for(int i=n-1; i>=0; i--){
            printf("%4d", arr[i]);
        }
        printf("\n");
    }
    else if(no==7){
        sort(arr, n);
        printf("You choose to Print the array in Asecending order..\n");
        printf("The Ascending order of your entered Array is : \n");
        for(int i=0; i<n; i++){
            printf("%4d", arr[i]);
        }
        printf("\n");
    }
    else if(no==8){
        printf("\nYou choose to Re-Enter the Array..\n");
    }
    else if(no==9){
        printf("\nYou choose to Exit..");
        printf("\nThank You for using this programme..\n");
    }
    }while(no==8);
    
    return 0;
}