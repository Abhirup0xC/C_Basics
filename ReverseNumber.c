// Title: Reverse a Number in C
// Description: A simple C program that takes an integer input and prints its reverse using a while loop.

#include <stdio.h>

int main()
{
    int a, b, rev = 0;

    printf("Enter the number you want to reverse:\n");
    scanf("%d", &a);

    while (a > 0)
    {
        b = a % 10;         
        rev = rev * 10 + b; 
        a = a / 10;        
    }

    printf("The reversed number is %d\n", rev);

    return 0;
}
