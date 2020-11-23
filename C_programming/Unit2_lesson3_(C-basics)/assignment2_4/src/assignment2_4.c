/*
 ============================================================================
 Name        : assignment2_4.c
 Author      : abdulrahman yasser
 Description : check number positive , negative or zero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float num;
	fflush(stdin); fflush(stdout);
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	if(num>0){
		fflush(stdin); fflush(stdout);
		printf("%f is positive.",num);
	}
	else if(num<0){
		fflush(stdin); fflush(stdout);
		printf("%f is negative.",num);
	}
	else if(num==0){
		fflush(stdin); fflush(stdout);
		printf(" you entered zero.");
	}
	return 0;
}
