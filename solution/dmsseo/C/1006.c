#include <stdio.h>

int main(){
	int score;
	scanf("%d", &score);
	
	if (score >= 90){
		printf("����� ������ A�Դϴ�.\n");
	} else if (score >= 80){
		printf("����� ������ B�Դϴ�.\n");
	} else if (score >= 70){
		printf("����� ������ C�Դϴ�.\n");
	} else {
		printf("����� ������ F�Դϴ�.\n");
	}
}
