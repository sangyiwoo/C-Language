#include <stdio.h>
int main(void)
{
	int a, b;
	char op;
		
	printf("������ �Է��ϼ��� : ");
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
	printf("����� �� �����ϴ�.\n");
	}

	return 0;
}