#include <stdio.h>
#include <conio.h>
	
int main(void)
{
	int num, sum;
	int i;

	while ( 1 )
	{
	    printf("정수를 입력하세요  (-1 입력 시 종료) : ");
	    scanf("%d", &num);
	
	    if ( num == -1 )
	        break;
	
	    sum = 0;
	    for ( i = 1 ; i <= num ; i++)
	        sum += i;
	    printf("%d까지의 합계 : %d\n", num, sum);
	}
	
	return 0;
}
