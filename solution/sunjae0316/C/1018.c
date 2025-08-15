#include<stdio.h>

int main()
{
	int N;
	int count = 0;
	
	scanf("%d",&N);
	
	for (int i = 2; i < N; i++)
	{
		if (N % i == 0)
		{
			count++;                  //나눠지는게 있다면 카운트 개수를 올림
		}
	}
	
	if (count == 0)
	{
		printf("prime");              //나눠지는게 없으면 소수
	}
	else 
	{
		printf("composite");          //나눠지는게 하나라도 있으면 소수가 아님
	}
	return 0;
}