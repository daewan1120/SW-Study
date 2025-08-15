#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N[5];
	int sum;
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&N[i]);
		sum += N[i];
	}
	printf("%d",sum);
	return 0;
}