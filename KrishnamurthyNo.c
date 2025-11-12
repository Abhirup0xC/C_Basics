//Program to find Kirshnamurthy No
//Logic- fetch each digit by %10 and find factorial, sum of each digit's factorail == original no?, then YES!
#include<stdio.h>
int main(){
	int a,i,b,fact,sum=0,num;
	printf("Enter a number to check: \n");
	scanf("%d", &num);
	a=num;
	while(a>0){
		b=a%10;
		fact=1;
		for(i=1;i<=b;i++){
			fact=fact*i;
		}
		sum = sum+fact;
		a=a/10;
	}
	if (sum == num) printf("Krisnamurthy number found!");
	else printf("Krisnamurthy number not found!");
	return 0;
}
