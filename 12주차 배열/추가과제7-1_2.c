#include <stdio.h>
int main(void)
{
    float data[10];
    
	int i;
    for(i=0;i<10;i++) scanf("%f", &data[i]);
    
    int aver=0;
    
    for(i=0;i<10;i++) aver+=data[i];
    
    printf("Æò±Õ°ª: %d", aver/10);

	return 0;
}