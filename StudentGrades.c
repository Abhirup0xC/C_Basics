#include <stdio.h>
int main() {
    int a, b, c, d, e, sum;
    float avg;

    printf("Enter the marks in sub-1: ");
    scanf("%d", &a);

    printf("Enter the marks in sub-2: ");
    scanf("%d", &b);

    printf("Enter the marks in sub-3: ");
    scanf("%d", &c);

    printf("Enter the marks in sub-4: ");
    scanf("%d", &d);

    printf("Enter the marks in sub-5: ");
    scanf("%d", &e);

    sum = a + b + c + d + e;
    printf("Total marks obtained = %d\n", sum);

    avg = sum / 5.0;  
    printf("Average marks obtained = %.2f\n", avg);

    if (avg >= 90)
        printf("You have scored A grade");
    
    else if (avg >= 80) 
        printf("You have scored B grade");
        
    else if (avg >= 70) 
        printf("You have scored C grade");
    
    else if (avg >= 60) 
        printf("You have scored D grade");
    
    else if (avg >= 50) 
        printf("You have scored E grade");
    
    else 
        printf("You have FAILED");
        
    return 0;
}
