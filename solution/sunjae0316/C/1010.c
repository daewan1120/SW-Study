#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max_func(int a, int b, int c);

int main()
{
	int x,y,z;
	
	scanf("%d %d %d",&x,&y,&z);
	int result  = max_func(x,y,z);
	printf("%d",result);
	return 0;
}

int max_func(int a, int b, int c)
{
	int max;
	
	if (a>b && a>c)
	{
		max = a;
	}
	else if(b>a && b> c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	return max;
}