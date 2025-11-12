//To print all prime no.s between 1-100.

#include<stdio.h>
int main(){
	int i, j,isprime;
	printf("Showing all prime numbers between 1 to 100\n");
	for(i=2;i<101;i++){
		isprime=0;
		for(j=1;j<=i;j++){
			if (i%j==0){
				isprime++;
			}
			
		}
		if(isprime==2) printf("%d\n", i);
	}
	return 0;
}
