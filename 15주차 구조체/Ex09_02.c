#include <stdio.h>

struct point{
	int x, y;
};

int main(void)
{
	struct point pt1, pt2;

	printf("pt1�� x, y ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &pt1.x, &pt1.y);

	printf("pt2�� x, y ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &pt2.x, &pt2.y);

	if(pt1.x == pt2.x && pt1.y == pt2.y)
		printf("�� ���� ��ǥ�� �����ϴ�.\n");
	else
		printf("�� ���� ��ǥ�� �ٸ��ϴ�.\n");

	return 0;
}