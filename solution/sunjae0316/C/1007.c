#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N;
	int res;
	
	scanf("%d",&N);
	for (int i = 1; i<=N; i++)
	{
		res += i;
	}
	printf("%d",res);
	return 0;
	
	
}