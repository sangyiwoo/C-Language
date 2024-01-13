int IsLeapYear(int year)
{
	int year;

	if(year%4==0 && (year%4%100)!=0) return 1;
	else return 0;
}