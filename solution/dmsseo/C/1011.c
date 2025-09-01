#include <stdio.h>

int main(){
	int arr[5];
	int total = 0; 
	
	for(int i = 0; i < 5; i ++){
		scanf("%d", &arr[i]);
		total += arr[i]; 
	}
	printf("%d\n", total); 
	return 0; 
}
