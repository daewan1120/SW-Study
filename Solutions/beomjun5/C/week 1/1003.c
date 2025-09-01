#include <stdio.h>

int main() {
	int age;
	double height;
	char grade;
	
	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("키를 입력하세요: ");
	scanf("%lf", &height);
	printf("혈액형을 입력하세요: ");
	scanf("%s", &grade);
	
	printf("나이: %d\n", age);
	printf("키: %.1lfcm\n", height);
	printf("혈액형: %c\n", grade);
	return 0;
}