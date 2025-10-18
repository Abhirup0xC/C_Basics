#include<stdio.h>

int main()
{
	int a, b , c;
	printf("Enter first number:\n");
	scanf("%d", &a);
	printf("Enter second number:\n");
	scanf("%d", &b);
	printf("Enter 1 for addition \n");
	printf("Enter 2 for subtraction \n");
	printf("Enter 3 for multiplication \n");
	printf("Enter 4 for division \n");
	printf("Enter your choice:");
	scanf("%d", &c);
	switch (c)
		{
			case 1:
				{
					printf("Sum of the two numbers entered=%d", a+b);
					break;
				}
			case 2:
				{
					printf("Difference of the two numbers entered=%d", a-b);
					break;
				}
			case 3:
				{
					printf("Product of the two numbers entered=%d", a*b);
					break;
				}
			case 4:
				{
					printf("Quotient of the two numbers entered=%d", a/b);
					break;
				}
			default : printf("INVALID NUMBER ENTERED!!!");
			
		}
	return 0;	
}
