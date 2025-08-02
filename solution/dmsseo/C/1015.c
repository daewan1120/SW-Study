#include <stdio.h>

int main(){
	int arr[2][3];
	int arr2[2][3];
	int sum[2][3];
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			sum[i][j] = arr[i][j] + arr2[i][j]; 
			printf("%d ", sum[i][j]); 
		}
		
		printf("\n"); 
	}
	
	return 0; 
}
