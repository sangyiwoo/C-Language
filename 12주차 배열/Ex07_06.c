#include <stdio.h>
int main(void)
{
	short data[2][3];
	int i, j;

	data[0][0] = 1;
	data[0][1] = 2;
	data[0][2] = 3;
	data[1][0] = 4;
	data[1][1] = 5;
	data[1][2] = 6;

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}