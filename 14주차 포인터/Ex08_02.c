#include <stdio.h>

int main(void)
{
	int x; //int형 변수 x선언
	int *p; //int*형 포인터 p선언

	p = &x; //p에 x의 주소 저장
	*p = 10; //p가 가리키는 변수에 10값 대입

	printf("*p = %d\n", *p); //10출력
	printf("*x = %d\n", *x); //10출력

	printf("p = %p\n", p); //포인터 변수 p에 저장되있던 주소 출력
	printf("&x = %p\n", &x); //x의 주소 출력

	printf("&p = %p\n", &p); //포이터 변수 p의 주소 출력

	return 0;
}
