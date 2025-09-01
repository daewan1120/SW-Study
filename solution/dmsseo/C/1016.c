#include <stdio.h> 

int main(){
	int arr[2][3]; 
	int sum_0;
	int sum_1;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &arr[i][j]); 
		}
	}
	
	for(int j = 0; j < 3; j++){
		sum_0 += arr[0][j]; 
	}
	
	for(int j = 0; j < 3; j++){
		sum_1 += arr[1][j]; 
	}
	
	printf("%d %d\n", sum_0, sum_1);
	return 0;
}