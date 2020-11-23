/*
 ============================================================================
 Name        : assignment2_3.c
 Author      : abdulrahman yasser
 Description : Find the largest number among 3 numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float x,y,z;
	fflush(stdin); fflush(stdout);
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if( x>y && x>z){
		printf("Largest number = %f",x);
	}
	else if( y>x && y>z ){
		printf("Largest number = %f",y);
	}
	else if( z>x && z>y ){
		printf("Largest number = %f",z);
	}
	return 0;
}
