#include <stdio.h>
int main(void)
{
	int i;
	
	for ( i = 1 ; i <= 10 ; i++ )
	{
	    if ( i % 2 == 0 )
	        return 1;
	    printf("%d ", i);
	}
	printf("���α׷��� �����մϴ�.\n");
	
	return 0;
}
