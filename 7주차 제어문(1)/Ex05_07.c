#include <stdio.h>
int main(void)
{
	int a, b;
	char op;

	printf("������ �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &op, &b);

	switch(op)
	{
	case '+':
		printf("%d + %d = %d\n", a, b, a+b);
	case '-':
		printf("%d - %d = %d\n", a, b, a-b);
	case '*':
		printf("%d * %d = %d\n", a, b, a*b);
	case '/':
		printf("%d / %d = %d\n", a, b, a/b);
	default:
		printf("����� �� �����ϴ�.\n");
	}
	return 0;
}