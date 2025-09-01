#include <stdio.h>
#include <string.h>


int main(){
	char str[30]; 
	
	scanf("%s", str); 
	
	int len = strlen(str);
	
	printf("%d\n", len);
	return 0; 
}