#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum_func(int a, int b);

int main()
{
	int x,y;
	int result;
	scanf("%d %d", &x,&y);
	
	result = sum_func(x,y);
	printf("%d",result);
	return 0;
}

int sum_func(int a, int b)
{
	return a+b;
}