#include <stdio.h>

int main() {
	int score;
	char grade;
	
	printf("점수를 입력하세요: ");
	scanf("%d", &score);
	
	if (score >= 90) {
		printf("A\n");
	} else if (score >= 80) {
		printf("B\n");
	} else if (score >= 70) {
		printf("C\n");
	} else {
		printf("F\n");
	}
	printf("당신의 학점은 %c입니다.");
	return 0;
}