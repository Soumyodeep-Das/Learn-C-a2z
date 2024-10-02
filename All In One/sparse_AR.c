#include <stdio.h>
int main(){
    int a[100][100],s[100][100],r,c,i,j;
    int x=0;
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
            if(a[i][j]!=0){
            	s[x][0]=a[i][j];
            	s[x][1]=i+1;
            	s[x][2]=j+1;
            	x=x+1;
			}
        } 
	printf("the location of non zero values are in");
    for (i=0;i<x;i++){
        printf("\nvalue=%d",s[i][0]);
        printf(",row=%d",s[i][1]);
        printf(",column=%d",s[i][2]);
	}
    return 0;
}









