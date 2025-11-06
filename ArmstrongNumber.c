// Armstrong number program
#include <stdio.h>
#include <math.h>

int main() {
    int num, i = 0, a = 0, x, y = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    a = num;
    while (a > 0) {
        a = a / 10;
        i++;
    }
    a = num;
    while (a > 0) {
        x = a % 10;
        y = y + pow(x, i);
        a = a / 10;
    }

    if (y == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
