#include<stdio.h>

int main()
{
	int N;
	
	scanf("%d",&N);
	
	int index;
	int a[101];
	int max;
	
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &a[i]);                        
	}
	
	max = a[1]; 
	for (int i = 1; i <= N; i++)
	{
		if (max <= a[i])                           // 최댓값이 바뀌면 저장   
		{
			max = a[i];                   
		}
	}
	
	for (int i = 1; i <= N; i++)
	{
		if (max == a[i])
		{
			index = i;                            
			break;                                 // 중복된 인덱스가 나올 수 있음 break를 사용함으로 가장 빨리 나오는 최댓값을 index로 출력
		}
	}
		                       
	
	
	printf("%d %d", max, index);
	return 0;
}