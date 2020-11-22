/*
 ============================================================================
 Name        : assignment1_4.c
 Author      : abdulrahman yasser
 Description : Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float num1,num2,product;
	fflush(stdin); fflush(stdout);
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	product = num1*num2;
	fflush(stdin); fflush(stdout);
	printf("product: %f",product);

	return 0;

}
