#include<stdio.h>
// Making Entered numbers deccending
int main(){
    
    int num, max, key, flag=1;
    
    printf("Enter how many numbers do you want to enter :- ");
    scanf("%d", &num);
    int arr[num];
    
    printf("Enter the numbers :- ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    
   for (int j = 0; j < num && flag==1; j++)
    {   
        for( int k=0; k<num-j-1; k++){

                if ( arr[k]<arr[k+1])
                {
                key=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=key;
                flag=1;
                }

            }   
            
        if(flag==0){
            break;
        }        
            
    }
                printf("\n\n");
                for(int i=0; i<num; i++){
                    printf("%d, %d\n", i+1, arr[i]);
                }
    
    
    return 0;
}