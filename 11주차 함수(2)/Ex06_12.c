#include <stdio.h>

void PrintCount(void);
void Increment(void);
void Decrement(void);

int count;
int main(void)
{
	Increment();
	PrintCount();

	return 0;
}

void PrintCount(void)
{
	printf("count = %d\n", count);
}

void Increment(void)
{
	count++;
}

void Decrement(void)
{
	count--;
}