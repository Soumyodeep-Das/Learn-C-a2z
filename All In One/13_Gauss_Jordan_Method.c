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
	// step 1
	k = mat[0][0];
    for(j=0; j<4; j++)
	{
		mat[0][j]=mat[0][j]/k;
	}
    l =mat[1][0];
    m =mat[2][0];
    for(i=0; i<4; i++)
	{
        mat[1][i]=mat[1][i]-(mat[0][i] * l);
		mat[2][i]=mat[2][i]-(mat[0][i] * m);
	}
    
    // step 2

    k = mat[1][1];
    for(j=0; j<4; j++)
	{
		mat[1][j]=mat[1][j]/k;
	}
    l =mat[0][1];
    m =mat[2][1];
    for(i=0; i<4; i++)
	{
        mat[0][i]=mat[0][i]-(mat[1][i] * l);
		mat[2][i]=mat[2][i]-(mat[1][i] * m);
	}

    // step 3

    k = mat[2][2];
    for(j=0; j<4; j++)
	{
		mat[2][j]=mat[2][j]/k;
	}
    l =mat[0][2];
    m =mat[1][2];
    for(i=0; i<4; i++)
	{
        mat[0][i]=mat[0][i]-(mat[2][i] * l);
		mat[1][i]=mat[1][i]-(mat[2][i] * m);
	}


    printf("\nThe Reduced matrix is : \n");
    for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%f\t", mat[i][j]);
		}
		printf("\n");
	}

	z=mat[2][3];
	y=mat[1][3];
	x=mat[0][3];
	printf("\n\nx=%.4f, y=%.4f, z=%.4f", x, y, z);
}
