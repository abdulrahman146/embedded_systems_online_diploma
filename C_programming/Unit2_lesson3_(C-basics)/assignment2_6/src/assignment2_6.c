/*
 ============================================================================
 Name        : assignment2_6.c
 Author      : abdulrahman yasser
 Description : calculate sum of natural numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num,i,sum=0;
	fflush(stdin); fflush(stdout);
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum +=i;
	}
	fflush(stdin); fflush(stdout);
	printf("sum = %d",sum);
	return 0;
}
