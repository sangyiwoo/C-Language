#include <stdio.h>

struct point{
	int x, y;
};

int main(void)
{
	struct point pt1 = {10, 20};
	struct point pt2 = {30, 40};
	struct point pt3 = pt1;
	struct point pt4;

	printf("pt1�� ��ǥ : %d, %d\n", pt1.x, pt1.y);
	printf("pt3�� ��ǥ : %d, %d\n", pt3.x, pt3.y);
	if(pt1.x == pt3.x && pt1.y == pt3.y)
		printf("pt1�� pt3�� ��ǥ�� �����ϴ�.\n");
	else
	printf("pt1�� pt3�� ��ǥ�� �ٸ��ϴ�.\n");

	pt4 = pt2;

	printf("pt2�� ��ǥ : %d, %d\n", pt2.x, pt2.y);
	printf("pt4�� ��ǥ : %d, %d\n", pt4.x, pt4.y);
	if(pt2.x == pt4.x && pt2.y == pt4.y)
		printf("pt2�� pt4�� ��ǥ�� �����ϴ�.\n");
	else
	printf("pt2�� pt4�� ��ǥ�� �ٸ��ϴ�.\n");
	
	return 0;
}