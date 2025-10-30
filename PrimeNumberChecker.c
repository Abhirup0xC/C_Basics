// Title: Prime Number Checker in C
// Description: A simple C program to check whether a given number is prime or not using a for loop.

#include <stdio.h>

void main()
{
    int a, i, isprime = 0;

    printf("Enter the number you want to check for prime:\n");
    scanf("%d", &a);

    if (a > 1)
    {
        for (i = 1; i <= a; i++)
        {
            if (a % i == 0)
                isprime++;
        }

        if (isprime == 2)
            printf("The number %d is a prime number\n", a);
        else
            printf("The number %d is not a prime number\n", a);
    }
    else
        printf("INVALID NUMBER ENTERED!!!\n");
}

