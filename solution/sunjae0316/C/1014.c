#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];

	
	scanf("%s",str);
	
	for (int i = 0; i < strlen(str)/2; i++)
	{
		char temp;
		temp = str[i];
		str[i] = str[strlen(str)-1-i];
		str[strlen(str)-1-i] = temp;
	}
	

	
	printf("%s",str);
	return  0;
}