#include<stdio.h>

int main()
{
	int totaldays, years, weeks, days;
	printf("enter total number of days");
	scanf("%d",&totaldays);
	years = totaldays / 365;
	totaldays = totaldays % 365;
	weeks = totaldays / 7;
	days = totaldays % 7;
	printf("%d years %d weeks %d days\n", years, weeks, days);
	return 0;
}

