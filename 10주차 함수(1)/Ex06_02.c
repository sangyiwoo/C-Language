#include <stdio.h>
void PrintSumAndAverage(int a, int b)
{
 	printf("�հ� : %d\n", a + b);
	printf("��� : %f\n", (double)(a+b)/2);
}
	int main(void)
{
	int x, y;

	PrintSumAndAverage(10, 20);

	printf("������ �Է��ϼ��� : ");
 	scanf("%d %d", &x, &y);
 	PrintSumAndAverage(x, y);

 	return 0;
}
