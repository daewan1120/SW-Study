#include<stdio.h>

int main()
{
	int N, M;
	
	scanf("%d %d",&N,&M);
	
	int A[101][101];
	int B[101][101];
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)         
		{
			scanf("%d",&A[i][j]);                     //A 2차원 배열 입력
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d",&B[i][j]);                     //B 2차원 배열 입력
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ",A[i][j]+B[i][j]);            //A,B 2차원 배열의 합 출력
		}
		printf("\n");
	}
	return 0;
}