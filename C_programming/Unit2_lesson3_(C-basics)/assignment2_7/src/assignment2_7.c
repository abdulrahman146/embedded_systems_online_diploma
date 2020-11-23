/*
 ============================================================================
 Name        : assignment2_7.c
 Author      : abdulrahman yasser
 Description : calculate the factorial of a number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int num,factorial=1,i;
	fflush(stdin); fflush(stdout);
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num>0){
		for(i=1;i<=num;i++){
			factorial*=i;
		}
		fflush(stdin); fflush(stdout);
		printf("Factorial = %d",factorial);
	}
	else if(num<0){
		fflush(stdin); fflush(stdout);
		printf("Error!!!,factorial of negative numbers doesn't exist");
	}
	else{
		fflush(stdin); fflush(stdout);
		printf("factorial of zero is 1");
	}
}
