#include <stdio.h>

int GetFactorial(int num); 
float GetMax(double a, double b, double c);

int main(void)
{
	int i_res;
	double f_res;

	i_res = GetFactorial(5); 
	printf("5! = %d\n", i_res);

 	f_res = GetMax(0.5, 10.5, 12.5); 
 	printf("�ִ밪 = %f\n", f_res);

 	return 0;
}

int GetFactorial(int num)
{
	int i;
 	int fact = 1;
 	for(i = 1 ; i <= num ; i++)
 	    fact *= i;
 	return fact;
}

float GetMax(double a, double b, double c)
{
	double max;
 	max = a > b ? a : b;
 	max = c > max ? c : max;
 	return max;
}
