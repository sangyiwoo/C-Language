#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20];

	strcpy(str1, "abcde");
	printf("str1 = %s\n", str1);

	strcpy(str2, str1);
	printf("str2 = %s\n", str2);

	return 0;
}