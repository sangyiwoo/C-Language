#include <stdio.h>
#define SIZE 10

int main(void)
{
	int array[SIZE] = {23, 96, 35, 42, 81, 19, 8, 77, 50, 64};
	int i, j, index;
	int temp;
	
	for(i=0;i<SIZE-1;i++)
	{
		index=i;
		for(j=i+1;j<SIZE;j++)
		{

			if(array[index]>array[j])
				index=j;
		}
		temp			= array[i];
		array[i]		= array[index];
		array[index]	= temp;
	}

	printf("정렬 결과 : ");
	for(i=0;i<SIZE;i++)
		printf("%d ", array[i]);
	printf("\n");

	return 0;
}