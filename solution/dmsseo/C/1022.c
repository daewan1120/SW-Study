#include <stdio.h>
#include <string.h>
#include <ctype.h>

char main(){
	char str[1000];
	char palindrome[1000]; 
	
	scanf("%s", &str);
	
	int len = strlen(str); 
	
	for (int i = 0; i < strlen(str); i++) {
		str[i] = tolower(str[i]);
	}
	
	for (int i = len; i >= 0; i--){
		printf("%c", str[i]);
	}

	
	return 0; 	
}