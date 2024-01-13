#include <stdio.h>
int main(void)
{
	int i;

	i = 1;
	while ( i <= 10 )
		printf("%d ", i++);
	printf("\n");
	return 0;
}
