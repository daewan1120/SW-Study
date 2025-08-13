#include <stdio.h>

int add(int a, int b);

int main(){
	int a, b ;
	scanf("%d %d", &a, &b);
	
	int result = add(a, b);
	printf("%d\n", result);
	return 0; 
}

int add(int a, int b){
	return a + b;
}
