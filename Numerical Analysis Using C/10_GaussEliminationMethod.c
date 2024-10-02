#include<stdio.h>
#include<math.h>

void main()
{
	float mat[3][4], k, l, m;
	float x, y, z;
	int i, j;
	printf("\n Enter the elements of the matrix : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%f", &mat[i][j]);
		}
	}
	printf("\nThe entered matrix is : \n\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%f\t", mat[i][j]);
		}
		printf("\n");
	}
	
	k=mat[1][0]/mat[0][0];
	l=mat[2][0]/mat[0][0];
	for(i=0;i<4;i++)
	{
		mat[1][i]=mat[1][i]-(mat[0][i]*k);
		mat[2][i]=mat[2][i]-(mat[0][i]*l);
	}
	m=mat[2][1]/mat[1][1];
	for(i=0; i<4; i++)
	{
		mat[2][i]=mat[2][i]-(mat[1][i]*m);
	}
	printf("\n\nThe reduced matrix is  : \n\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%f\t", mat[i][j]);
		}
		printf("\n");
	}
	z=(mat[2][3]/mat[2][2]);
	y=(mat[1][3]-mat[1][2]*z)/mat[1][1];
	x=(mat[0][3]-mat[0][2]*z-mat[0][1]*y)/mat[0][0];
	printf("\n\nx=%f, y=%f, z=%f", x, y, z);
}
