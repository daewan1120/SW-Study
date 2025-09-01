#include <stdio.h> 

int main(){
	int n; 
	scanf("%d", &n); 
	int arr[n]; 
	
	
	for (int i = 0; i < n; i ++){
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0]; 
	int index = 1; 
	
	for(int i = 1; i < n; i ++){
		if (arr[i] > max){
			max = arr[i];
			index = 1 + i; 
		}
	}
	
	printf("%d %d\n", max, index); 
	return 0; 
}