/*
 ============================================================================
 Name        : assignment2_2.c
 Author      : abdulrahman yasser
 Description : Check letter vowel or consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char x;
	fflush(stdin); fflush(stdout);
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if(x=='A'||x=='a'||x=='O'||x=='o'||x=='I'||x=='i'||x=='U'||x=='u'||x=='E'||x=='e'){
		fflush(stdin); fflush(stdout);
		printf("%c is a vowel",x);
	}
	else{
		fflush(stdin); fflush(stdout);
		printf("%c is a consonant",x);
	}
	return 0;
}
