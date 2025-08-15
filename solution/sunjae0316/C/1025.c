#include<stdio.h>

int main()
{
	int N, M;
	
	scanf("%d %d", &N,&M);
	
	int A[101][101];
	int max;
	int indexi,indexj;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d",&A[i][j]);               // 2차원 배열 A 입력
		}
	}
	
	max = A[0][0];                              // 2차원 배열의 가장 처음을 max로 잡음
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if(max < A[i][j])
			{
				max = A[i][j];                  // 순서대로 뒤로 가면서 max보다 큰 수가 있으면 max에 저장
				indexi = i+1;
				indexj = j+1;                   // i와 j가 몇열 몇행인지 저장
				
			}
		}
	}
	
	printf("%d\n",max);
	printf("%d %d",indexi,indexj);
	
	return 0;	
}