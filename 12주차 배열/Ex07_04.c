#include <stdio.h>
#define MAX 5

int main(void)
{
	int arr[MAX] = {0};
	int i;

	int sum;
	double average;

	printf("%d���� ������ �Է��ϼ��� : ", MAX);
	for(i=0;i<MAX;i++)
		scanf("%d", &arr[i]);

	for(i=0, sum=0;i<MAX;i++)
		sum += arr[i];

	average = (double)sum / (double)MAX;
	printf("�հ� : %d, ��� : %5.2f\n", sum, average);

	return 0;
}