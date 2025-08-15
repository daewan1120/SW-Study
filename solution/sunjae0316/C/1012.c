#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N[5];
	int X;
	int count = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d",&N[i]);
	}
	scanf("%d",&X);
	
	for(int i = 0; i < 5; i++)
	{
		if (N[i] == X){count++;}
		
	}
	printf("%d", count);
	return 0;
	
}