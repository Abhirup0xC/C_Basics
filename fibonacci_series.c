// Program to Generate Fibonacci Series up to n Terms

#include<stdio.h>
void main()
{
	int a=0, b=1, c, n, i;
	printf("Enter the number of terms\n");
	scanf("%d", &n);
	printf("Fibonacci series:\n");
	printf("%d\n%d\n",a,b);
	for(i=0;i<=n-3;i++)
	{
		c = a+b;
		printf("%d\n", c);
		a = b;
		b = c;
	}
}
