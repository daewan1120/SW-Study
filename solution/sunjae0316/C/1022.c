#include<stdio.h>
#include<string.h>


int main()
{
	char A[1001];
	char AUP[1001];
	char B[1001];
	int len;
	
	fgets(A,sizeof(A),stdin);                           //입력 받기
	A[strlen(A) - 1] = '\0';                            //fgets 로 입력을 받고 Enter를 누르면 개행문자가 저장이 되므로 널문자로 바꿔줌
	len = strlen(A);                                   
	
	for (int i = 0; i < len; i++)
	{
		if ('a' <= A[i] && A[i] <= 'z')                  //소문자들을 대문자로 변경
		A[i] = A[i] - 32;                                //알파벳 대문자와 소문자의 아스키코드값이 32 차이나는것을 활용
	}
	
	int j = 0;
	for (int i = 0; i < len; i++)
	{  
		if (A[i] != ' ')                                 //만약에 개행문자가 있다면 그거를 제외하고 새로운 배열에 입력 
		{ 
			AUP[j] = A[i];                               
			j++;
		}
	}                                                     //여기까지 하면 문장 전체가 대문자이면서 띄어쓰기가 없는 문자열이 만들어짐
	AUP[j] = '\0';                                        //마지막 널값
	
	
	strcpy(B,AUP);                                        //앞뒤를 바꿔서 비교를 위해 strcpy 함수를 사용해 B와 AUP을 같게 만듬
	
	int left = 0;
	int right = strlen(AUP) - 1;
	while(left < right)
	{
		char temp;
		temp = B[left];                                   //앞 뒤 한자리씩 바꿔서 저장
		B[left] = B[right];
		B[right] = temp; 
		left++;
		right--;
	}
	
	if (strcmp(B,AUP) == 0) printf("YES");                //strcmp 함수를 활용하여 만약 앞뒤 바꾸기전 문자열이랑 앞뒤 바꾸고난 문자열이 같으면 YES 출력 아니면 NO 출력
	else printf("NO");

	return 0;
}

