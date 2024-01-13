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

	printf("pt1ÀÇ ÁÂÇ¥ : %d, %d\n", pt1.x, pt1.y);
	printf("pt3ÀÇ ÁÂÇ¥ : %d, %d\n", pt3.x, pt3.y);
	if(pt1.x == pt3.x && pt1.y == pt3.y)
		printf("pt1°ú pt3ÀÇ ÁÂÇ¥°¡ °°½À´Ï´Ù.\n");
	else
	printf("pt1°ú pt3ÀÇ ÁÂÇ¥°¡ ´Ù¸¨´Ï´Ù.\n");

	pt4 = pt2;

	printf("pt2ÀÇ ÁÂÇ¥ : %d, %d\n", pt2.x, pt2.y);
	printf("pt4ÀÇ ÁÂÇ¥ : %d, %d\n", pt4.x, pt4.y);
	if(pt2.x == pt4.x && pt2.y == pt4.y)
		printf("pt2°ú pt4ÀÇ ÁÂÇ¥°¡ °°½À´Ï´Ù.\n");
	else
	printf("pt2°ú pt4ÀÇ ÁÂÇ¥°¡ ´Ù¸¨´Ï´Ù.\n");
	
	return 0;
}