#include<stdio.h>

int main()
{
	int score;
	char rank;
	
	scanf("%d",&score);
	
	if (score >= 90){
		rank = 'A';
	}
	else if (score >= 80){
		rank = 'B';
	}
	else if (score >= 70){
		rank = 'C';
	}
	else {
		rank = 'F';
	}
	printf("당신의 학점은 %c입니다.",rank);
	return 0;
}