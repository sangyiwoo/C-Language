#include <stdio.h>
int main(void)
{
    float data[10]={0};
    int index, box;
    
    printf("�Ǽ� 10�� �Է� : ");
    for(int i=0;i<10;i++) scanf("%f", &data[i]);
    
    for(int i=0;i<10;i++)
    {
        index = i;
        for(int j=i+1;j<10;j++)
        {
            if(data[i]<data[j])
            {
            box = data[i];
            data[i]= data[j];
            data[j] = box;
            }
        }
    }
    
    printf("��������: ");
    for(int i=0;i<10;i++) printf("%f ", data[i]);
    

    return 0;
}