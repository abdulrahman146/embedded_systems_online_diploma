/*
 ============================================================================
 Name        : assignment2_8.c
 Author      : abdulrahman yasser
 Description : simple calculator: 2 operands and 4 operators only ( + , - , * , / )
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char operator;
	float x,y,result;
	fflush(stdin); fflush(stdout);
	printf("Enter operator either + or - or * or divide:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);

	if(operator=='+'||operator=='-'||operator=='*'||operator=='/'){
		fflush(stdin); fflush(stdout);
		printf("Enter two operands: ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&x,&y);

		switch(operator){
		case'+':
			result=x+y;
			fflush(stdin); fflush(stdout);
			printf("%f + %f = %f",x,y,result);
			break;
		case'-':
			result=x-y;
			fflush(stdin); fflush(stdout);
			printf("%f - %f = %f",x,y,result);
			break;
		case'*':
			result=x*y;
			fflush(stdin); fflush(stdout);
			printf("%f * %f = %f",x,y,result);
			break;
		case'/':
			result=x/y;
			fflush(stdin); fflush(stdout);
			printf("%f / %f = %f",x,y,result);
			break;
		}
	}
		else{
			fflush(stdin); fflush(stdout);
			printf("invalid operand!!");
		}

	}


