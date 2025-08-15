#include<stdio.h>

int main()
{
	int YY;
	int MM;
	int DD;
	
	int day;
	
	while(1)
	{
	scanf("%d %d %d", &YY,&MM,&DD);
	if (MM <= 12 && DD <= 31) break;                                                  // 날짜 적는 형식에 안맞추면 다시 입력
	else printf("다시 입력해주세요");
	}
	
	day = DD;                                                                         // day를 기본적으로 DD로 잡음으로서 MM월의 DD일이 몇일인지 표시
	
	for (int i = 1; i < MM; i++)                                                      // 입력한 달보다 1 작게 해서 MM의 달에는 DD만 더하게끔 함
	{
		if (i == 1) day += 31;
		else if (i == 2)
		{
			if ((YY % 4 == 0 && YY % 100 != 0) || YY % 400 == 0) day += 29;            // 윤년일때 가정
			else day += 28;                                                            // 윤년이 아닐때 가정
		}
		else if (i == 3) day += 31;
		else if (i == 4) day += 30;
		else if (i == 5) day += 31;
		else if (i == 6) day += 30;
		else if (i == 7) day += 31;
		else if (i == 8) day += 31;
		else if (i == 9) day += 30;
		else if (i == 10) day += 31;
		else if (i == 11) day += 30;
		else if (i == 12) day += 31;                                                    // 달마다 몇일인지 다르니까 달마다 표시
	}
		
		printf("%d", day);
		return 0;
	}