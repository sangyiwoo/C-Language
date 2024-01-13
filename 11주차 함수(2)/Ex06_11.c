#include <stdio.h>

void PrintCount(void);
void Increment(void);
void Decrment(void);

int main(void)
{
	count = 0;

	Increment();
	PrintCount();

	return 0;
}

int count;

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