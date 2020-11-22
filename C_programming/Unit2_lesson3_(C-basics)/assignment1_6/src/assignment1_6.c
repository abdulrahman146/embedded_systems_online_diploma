/*
 ============================================================================
 Name        : assignment1_6.c
 Author      : abdulrahman yasser
 Description : Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float num1,num2,temp;
	fflush(stdin); fflush(stdout);
	printf("Enter the value of number1 : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);
	fflush(stdin); fflush(stdout);
	printf("Enter the value of number2 : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	fflush(stdin); fflush(stdout);
	printf("After swapping, the value of num1 is %f and the value of num2 is %f",num1,num2);
	return 0;
}
