#include<stdio.h>

int main()
{
	int N;
	int sum;
	
	scanf("%d",&N);
	
	int A[101][101];
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d",&A[i][j]);	         // 2차원 배열 입력하기
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j == i)                      // i랑 j가 같으면 대각선
			{
				sum += A[i][j];
			}
		}
	}
	
	printf("%d", sum);
	return 0;
}