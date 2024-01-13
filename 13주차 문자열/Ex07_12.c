#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[20];

	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("%s씨, 안녕하세요?\n", name);

	return 0;
}