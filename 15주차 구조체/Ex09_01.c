#include <stdio.h>
#include <string.h>

struct product{
	char name[20];
	int price;
	int stock;
};

int main(void)
{
	struct product prd1;
	struct product prd2 = {"����2L", 9500, 20};

	prd1.price = 15000;
	prd1.stock = 30;
	strcpy(prd1.name, "�ͽ�Ŀ��");

	printf("%s : %d��, ���=%d\n",
			prd1.name, prd1.price, prd1.stock);
	printf("%s : %d��, ���=%d\n",
			prd2.name, prd2.price, prd2.stock);

	return 0;
}