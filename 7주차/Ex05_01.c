#include <stdio.h> //라이브러리에 헤더파일 포함
int main(void) // 진입점 함수 선언
{
	int score; //정수형 함수 score 선언

	printf("점수를 입력하세요 : "); //출력
	scanf("%d", &score); //입력

	if(score<60) //score값이 60보다 작을시
		printf("%d점은 불합격입니다.\n", score); //출력
	
	if(score>=60) //score값이 60보다 크거나 같을시
		printf("%d점은 합격입니다.\n", score); //출력

	return 0; //외부로 0값을 반환해 정상 종료
}