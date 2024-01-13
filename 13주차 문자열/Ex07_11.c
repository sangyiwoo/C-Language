#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "abcde";

	strcat(str, "12345");

	printf("str = %s\n", str);

	return 0;
}S