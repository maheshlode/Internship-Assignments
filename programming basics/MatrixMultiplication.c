#include<stdio.h>

int arr1[10][10];
int arr2[10][10];
int matMul[10][10];

int calMatrixMultiplication()
{
	int row1=0,col1=0,row2=0,col2=0,i,j,k;
	printf("Enter the number of rows :");
	scanf("%d",&row1);
	
	printf("Enter the number of columns :");
	scanf("%d",&col1);
	
	printf("Enter the elements of first matrix :");
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
			printf("\nEnter element for [%d][%d] position ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter the number of rows :");
	scanf("%d",&row2);
	
	printf("Enter the number of columns :");
	scanf("%d",&col2);
	
	if(col1==row2)
	{
		printf("Enter the elements of second matrix :");
		for(i=0; i<row2; i++)
		{
			for(j=0; j<col2; j++)
			{
				printf("\nEnter element for [%d][%d] position ",i,j);
				scanf("%d",&arr2[i][j]);
			}
		}
		
		printf("Matrix multiplication is :\n");
		for(i=0; i<row2; i++)
		{
			for(j=0; j<col1; j++)
			{
				for(k=0; k<col1; k++)
				{
					matMul[i][j] = matMul[i][j] + arr1[i][k]*arr2[k][j];
				}
			}
		}
		
		for(i=0; i<row1; i++)
		{
			for(j=0; j<col2; j++)
			{
				printf("%d\t",matMul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix multiplication with %d column and %d row is not allowed",col1,row2);
	}
}

void main(void)
{
	calMatrixMultiplication();
}