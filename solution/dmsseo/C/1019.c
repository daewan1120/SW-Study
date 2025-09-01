#include <stdio.h> 

int main(){
	int year, month, date; 
	int cnt = 0;
	int last_dates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d %d %d", &year, &month, &date); 
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		 last_dates[1] = 29;
	}
	
	for (int i = 0; i < month - 1; i ++){  // i < month - 1 이 부분만 이해가 안가서 지피티한테 물어봤어요 ㅜ 
		cnt += last_dates[i];
	} 
	
	cnt += date; 
	
	printf("%d\n", cnt); 
	
	return 0; 
}