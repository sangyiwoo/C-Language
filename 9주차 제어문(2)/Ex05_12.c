#include <stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	int factorial = 1;

	i = 1;
	while ( i <= 10 )
	{
	    sum += i;
	    factorial *= i;
	    i++;
	} 
	printf("1~10ÀÇ ÇÕ°è : %d\n", sum);
	printf("1~10ÀÇ °ö : %d\n", factorial);
	
	return 0;
}
