#include <stdio.h>
#include <conio.h>
	
int main(void)
{
	int num, sum;
	int i;

	while ( 1 )
	{
	    printf("������ �Է��ϼ���  (-1 �Է� �� ����) : ");
	    scanf("%d", &num);
	
	    if ( num == -1 )
	        break;
	
	    sum = 0;
	    for ( i = 1 ; i <= num ; i++)
	        sum += i;
	    printf("%d������ �հ� : %d\n", num, sum);
	}
	
	return 0;
}
