/*
 ============================================================================
 Name        : assignment1_3.c
 Author      : abdulrahman yasser
 Description : Adding two integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1,num2,sum;
	fflush(stdin); fflush(stdout);
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	sum = num1+num2;
	fflush(stdin); fflush(stdout);
	printf("sum: %d",sum);

	return 0;
}
