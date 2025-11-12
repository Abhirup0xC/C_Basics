#include<stdio.h>
int main(){
	int a, i, j;
	printf("Enter the number of rows:\n");
	scanf("%d", &a);
	for(i=0;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("*  ");
		
	}
	printf("\n");
	}
	return 0;
}
