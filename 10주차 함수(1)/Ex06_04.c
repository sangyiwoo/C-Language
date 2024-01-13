#include <stdio.h>

double GetMax(double a, double b, double c)
{
	double max;
	max=a>b?a:b;
	max=c>max?c:max;
	return max;
}
	
int main(void)
{
	double x,y,z;
	double result;

	printf("세 개의 실수를 입력하세요 : ");
	scanf("%lf %lf %lf", &x, &y, &z);
	result=GetMax(x, y, z);
	printf("result=%f\n", result);

	//result=GetMax(0.5, 10.5);
	//result=GetMax(0.5, 10.5, 12.5, 1.5);

	return 0;
}