#include <stdio.h> //라이브러리에 헤더파일 포함

int main(void) //진입점 함수(메인함수) 선언
{
	int score; //정수형 함수 score 선언

	printf("점수를 입력하세요 : "); //출력
	scanf("%d", &score); //입력
	
	if(score<60) //score가 60보다 작을시
		printf("%d점은 불합격입니다.\n", score);
	else //그외 경우
		printf("%d점은 합격입니다.\n", score);

	return 0; //외부에 0으로 반환해 정상 종료
}