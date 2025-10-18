#include<stdio.h>
int main()
{
	int a, b , c;
	printf("Enter first number:");
	scanf("%d", &a);
	printf("Enter second number:");
	scanf("%d", &b);
	a>b? printf("%d is greater", a) : printf("%d is greater", b);
	return 0;
}
