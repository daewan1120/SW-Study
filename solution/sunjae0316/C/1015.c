#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int A[2][3];
	int B[2][3];


	for (int i = 0; i< 2; i++)
	{
		for (int j = 0; j< 3; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	for (int i = 0; i< 2; i++)
	{
		for (int j = 0; j< 3; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	

	
	for (int i = 0; i< 2; i++)
	{
		for (int j = 0; j< 3; j++)
		{
			printf("%d ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	
}