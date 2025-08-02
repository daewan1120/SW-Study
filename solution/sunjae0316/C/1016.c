#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int A[2][3];
	int sum[2];
	
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d",&A[i][j]);
			sum[i] += A[i][j];
		}
	}
	
	for (int i = 0; i< 2; i++)
	{
		printf("%d ",sum[i]);
	}
	return 0;
	
}