#include<stdio.h>

int main()
{
	int N;
	
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)                         //하나씩 나눠보아 나머지가 0이되면 정수N의 약수인것을 이용
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}