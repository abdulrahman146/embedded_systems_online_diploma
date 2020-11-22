/*
 ============================================================================
 Name        : assignment1_7.c
 Author      : abdulrahman yasser
 Description : Swapping two numbers without temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float x,y;
	fflush(stdin); fflush(stdout);
	printf("Enter number 1 : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	fflush(stdin); fflush(stdout);
	printf("Enter number2 : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	//if x=5 & y=3 for example
	x=x-y; //now x=5-3 =2
	y=y+x; //now y=3+2 =5 which is the initial value of x
	x=y-x; //now x=5-2 =3 which is the initial value of y
	fflush(stdin); fflush(stdout);
	printf("After swapping, number1 is %f and number2 is %f",x,y);
	return 0;
}
