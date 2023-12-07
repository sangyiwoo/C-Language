#include <stdio.h>

int main(void)
{
	char *pc; // char*형 포인터 변수 pc 선언(char 포인터는 char형 변수의 주소를 저장)
	int *pi; // int*형 포인터 변수 pi 선언(int 포인터는 int형 변수의 주소를 저장)
	double *pd; // doube*형 포인터 변수 pd 선언(double 포인터는 double형 변수의 주소를 저장)

	printf("pc의 크기 : %d\n", sizeof(pc)); // 각 포인터 변수의 바이트 크기를 구하기 위해 sizeof 연산자 이용
	printf("pi의 크기 : %d\n", sizeof(pi));
 	printf("pd의 크기 : %d\n", sizeof(pd));

 	printf("char* 의 크기 : %d\n", sizeof(char*)); // 각 포인터형의 크기를 출력(데이터형에 상관 없이 포인터형의 크기는 항상 4바이트)
 	printf("short* 의 크기 : %d\n", sizeof(short*));
 	printf("int* 의 크기 : %d\n", sizeof(int*));
 	printf("float* 의 크기 : %d\n", sizeof(float*));
 	printf("double*의 크기 : %d\n", sizeof(double*));

 	return 0;
}
