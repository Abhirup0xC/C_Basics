// Program to Check Whether a Given Year is a Leap Year

#include<stdio.h>
int main()
{
	int a;
	printf("Enter year to cheack for leap year:");
	scanf("%d", &a);
	if (a%400==0)
		printf("The given year is leap year");
	else if (a%100!=0 && a%4==0)
		printf("The given year is leap year");
	else 
		printf("The given year is not a leap year");
		
	return 0;
}
