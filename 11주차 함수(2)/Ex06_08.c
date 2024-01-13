#include <stdio.h>

void PrintCount(void);

int main(void)
{
 	int count = 0; 
 	printf("main: count = %d\n", count); 

 	PrintCount( );

 	return 0;
}

void PrintCount(void)
{
 	int count = 100; 
 	printf("PrintCount: count = %d\n", count);
}
