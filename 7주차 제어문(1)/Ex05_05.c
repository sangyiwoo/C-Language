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
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, a-b);
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, a*b);
		break;
	case '/':
		printf("%d / %d = %d\n", a, b, a/b);
		break;
	default:
		printf("����� �� �����ϴ�.\n");
		break;
	}
	return 0;
}