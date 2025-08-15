#include<stdio.h>

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int max;
	int min;
	int a[101];
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}
	
	max = a[0];
	min = a[0];
	
	
	for (int i = 0; i < N; i++)
	{
		if (a[i] > max) 
		{
            max = a[i];
        }
        if (a[i] < min) 
		{
            min = a[i];
        }
	}
	
	
	printf("%d %d",min, max);
	return 0;
}