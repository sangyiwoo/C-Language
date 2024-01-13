#include <stdio.h>
int IsleapYear(int year);
int GetDaysOfMonth(int year, int month);
int main(void)
{
	int year, month, day;
	printf("년도와 월 입력 : ");
	scanf("%d %d", &year, &month);
	day = GetDaysOfMonth(year, month);
	printf("%d년 %d월의 날짜 수는 %d입니다.", year, month, day);
}

int IsleapYear(int year)
{
	if(year%4==0 || year%4==0&&year%100!=0) return 29;
	else return 28;
}

int GetDaysOfMonth(int year, int month)
{
	if(month%2==1) return 31;
	else if(month==2) return IsleapYear(year);
	else return 30;
}