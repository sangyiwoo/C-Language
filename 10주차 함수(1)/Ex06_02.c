#include <stdio.h>
void PrintSumAndAverage(int a, int b)
{
 	printf("합계 : %d\n", a + b);
	printf("평균 : %f\n", (double)(a+b)/2);
}
	int main(void)
{
	int x, y;

	PrintSumAndAverage(10, 20);

	printf("정수를 입력하세요 : ");
 	scanf("%d %d", &x, &y);
 	PrintSumAndAverage(x, y);

 	return 0;
}
