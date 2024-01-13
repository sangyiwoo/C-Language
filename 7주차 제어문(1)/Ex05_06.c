#include <stdio.h>
int main(void)
{
	int a, b;
	char op;
		
	printf("수식을 입력하세요 : ");
	scanf("%d %c %d", &a, &op, &b);

	if(op=='+')
	{
	printf("%d + %d = %d\n", a, b, a+b);
	}
	else if(op=='-')
	{
	printf("%d - %d = %d\n", a, b, a-b);
	}
	else if(op=='*')
	{
	printf("%d * %d = %d\n", a, b, a*b);
	}
	else if(op=='/')
	{
	printf("%d / %d = %d\n", a, b, a/b);
	}
	else
	{
	printf("계산할 수 없습니다.\n");
	}

	return 0;
}