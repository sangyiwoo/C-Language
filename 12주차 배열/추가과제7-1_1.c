#include <stdio.h>
int main(void)
{
    int data[10];
	
	int i

    for(i=0;i<10;i++) scanf_s("%d", &data[i]);

    int max=data[0], min=data[0];
    
    for(i=0;i<10;i++)
    {
        max = data[i]>max?data[i]:max;
        min = min>data[i]?data[i]:min;
    }
    
    printf("최소값: %d, 최대값: %d", min,max);
	
	return 0;
}