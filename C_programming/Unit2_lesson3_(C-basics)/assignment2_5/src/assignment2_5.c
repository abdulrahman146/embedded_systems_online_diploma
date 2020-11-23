/*
 ============================================================================
 Name        : assignment2_5.c
 Author      : abdulrahman yasser
 Description : check the character is an alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char x;
	fflush(stdin); fflush(stdout);
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if( (x>='a' && x<='z') || (x>='A' && x<='Z')){
		fflush(stdin); fflush(stdout);
		printf("%c is an alphabet",x);
	}
	else{
		fflush(stdin); fflush(stdout);
		printf("%c is not an alphabet",x);
	}
	return 0;
}
