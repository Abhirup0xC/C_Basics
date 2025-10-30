// Program to Calculate the Factorial of a Number in C

#include<stdio.h>
void main()
{
	int a, i, fact = 1;
	printf("Enter the number you want to find factorial\n");
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
		fact = fact*(i);
	} 
	printf("Factorial of %d is %d", a, fact);
}
