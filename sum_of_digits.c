// Program to Calculate the Sum of Digits of a Number in C

#include<stdio.h>
void main()
{
  
	int a, b, sum = 0;
	printf("Enter the number to calculate it's digits sum \n");
	scanf("%d", &a);
	while(a>0)
	{
		b = a%10;
		sum = sum+b;
		a = a/10;
	}
	printf("The sum of the digits is %d", sum);
	
}
