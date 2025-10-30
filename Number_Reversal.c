// Title: Reverse Number in C
// Description: A simple C program to find and display the reverse of a given integer using a while loop.

#include<stdio.h>
void main()
{
	int a, b=0, rev=0;
	printf("Enter a number to find it's reverse: \n");
	scanf("%d", &a);
	while(a>0)
	{
		
		b = a%10;
		rev = rev*10 + b;
		a = a/10;
	
	}
  
	printf("The reversed number = %d\n", rev);
  
}
