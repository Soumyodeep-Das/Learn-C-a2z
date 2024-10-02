#include<stdio.h>

void Multipliction_Table( int *table, int n){
    printf("\nThe multiplication table of %d is :-  \n", n);
    for(int i=1; i<=10; i++){
        table[i]=n*i;
    }
    for(int i=1; i<=10; i++){
        printf("\n%d x %d = %d\n", n, i, table[i]);
    }
}
  
int main(){
    
    int count;
    printf("\nEnter how many tables you want :-  ");
    scanf("%d", &count);
    printf("\nEnter which number's table you want :- \n");
    int tables[count], mul[count][10];
    for(int i=1; i<=count; i++){
        scanf("\n%d", &tables[i]);
    }
    for(int j=1, i=1; j<=count, i<=count; j++, i++){
        Multipliction_Table( mul[0], tables[i]);
    }
    
    
    return 0;
}