#include <stdio.h>
int GetFactorial(int num)
{
	int i;
	int fact = 1;
 	for(i = 1 ; i <= num ; i++)
	    fact *= i;
	return fact;
}

int GetSum(int num)
{
 	int i;
 	int sum = 0;
 	for(i = 1 ; i <= num ; i++)
 	    sum += i;
 	return sum;
}

int main(void)
{
	int result1, result2;

 	result1 = GetFactorial(10); 
 	printf("10 ���丮�� = %d\n", result1);

 	result2 = GetSum(10); 
 	printf("1~10�� �հ� = %d\n", result2);

 	return 0;
}
