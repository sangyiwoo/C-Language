#include <stdio.h>

#define SQUARE(n) n*n //매크로 함수의 정의

int square(int n)
{
	return n*n;
}

int main(void)
{
	int result = SQUARE(3);
	printf("3의 제곱 : %d\n", result);
	
	result = SQUARE(1+2);
	printf("SQUARE(1+2) = %d\n", result);
	
	result = square(1+2);
	printf("square(1+2) = %d\n", result);
	
	printf("SQUARE(2.5) = %f\n", SQUARE(2.5));
	printf("SQUARE(2.5) = %d\n", square(2.5));
	
	return 0;
 }
