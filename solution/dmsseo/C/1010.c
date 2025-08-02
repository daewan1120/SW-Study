#include <stdio.h>

int max(int a, int b, int c); 

int main(){
	int a, b, c; 
	scanf("%d %d %d", &a, &b, &c); 
	
	int result = max(a, b, c);
	
	printf("%d\n", result);
	return 0;
}

int max(int a, int b, int c){
	int max = a; 
	
	if(b > max){
		max = b; 
	}
	if(c > max){
		max = c;
	}
	return max;
}