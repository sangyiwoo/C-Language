#include <stdio.h>
int main(void)
{
	int i;
	int sum=0;
	int factorial=1;

	for(i=1;i<=10;i++)
	{
		sum+=i;
		factorial*=i;
	}
	printf("1~10ÀÇ ÇÕ : %d\n", sum);
	printf("1~10ÀÇ °ö : %d\n", factorial);

	return 0;
}