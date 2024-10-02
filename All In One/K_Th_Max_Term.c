#include<stdio.h>
// k th max term.
int main(){
    int t = 99999, max, flag, k;
    int arr[5];
    printf("\n**K th Max Number**\n");
    printf("\nEnter the value of K :- ");
    scanf("%d", &k);
    printf("\nEnter the numbers (maximum 5 numbers) :- \n");

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }//printf("The following array is :- \n");
    // for(int i=0; i<5; i++){
    //     printf("%d, %d\n", i, arr[i]);
    // }
    
    while(k!=0){
        max=arr[0];
        for( int j=1; j<5; j++){
            if(max<arr[j] && t>arr[j]){ 
                /* && flag==0
                t=arr[j];
                arr[j]=max;
                max=t;
                flag=1;
                */
                max=arr[j];
                
                
            }
            
        }
        t=max;
        k--;
    }
    printf("The k th max number is %d\n", max);
    printf("The k th max number is %d", t);
    return 0;
}