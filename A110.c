#include<stdio.h>
#include<conio.h>
int main()
{
	int year,week,day,days;
	printf("enter days\n");
	scanf("%d",&days);
	year=days/365;
	week=(days%365)/7;
	day=days-(year*365)+(week*7);
	printf("year =%d",year);
	printf("week=%d",week);
	printf("day=%d",day);
}
