#include <stdio.h>

int main() {
	int a, b, c;
	double average;
	
	printf("점수를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);
	
	average = (a + b + c) / 3.0;
	
	printf("%.1lf\n", average);
	return 0;
}