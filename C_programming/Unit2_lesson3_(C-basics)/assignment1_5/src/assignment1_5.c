/*
 ============================================================================
 Name        : assignment1_5.c
 Author      : abdulrahman yasser
 Description : Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char G;
	fflush(stdin); fflush(stdout);
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&G);
	fflush(stdin); fflush(stdout);
	printf("ASCII value of %c : %d",G,G);
	return 0;

}
