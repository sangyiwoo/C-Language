#include <stdio.h>
#include <string.h>

#define MAX_PRODUCT 5

struct product {
	char name[20];
	int price;
	int stock;
};

int main(void)
{
	struct product prd[MAX_PRODUCT]; //PRODUCT prd[MAX_PRODUCT];�� �ȵǼ� ����
	int i;

	printf("%d ���� ��ǰ ������ �Է��ϼ���. \n", MAX_PRODUCT);
	for(i=0;i<MAX_PRODUCT;i++)
	{
		printf("��ǰ�� : ");
		scanf("%s", prd[i].name);
		printf("����, ��� : ");
		scanf("%d %d", &prd[i].price, &prd[i].stock);
	}
	printf("\n�� ǰ ��		�� ��		�� �� ��\n");
	
	for(i=0;i<MAX_PRODUCT;i++)
	{
		printf("%-20s	%d	%10d",

			prd[i].name, prd[i].price, prd[i].stock);
		if(prd[i].stock < 10)
			printf("==> ��� ����! �ֹ� �ʿ�!\n");
		else
			printf("\n");
	}

	return 0;
}