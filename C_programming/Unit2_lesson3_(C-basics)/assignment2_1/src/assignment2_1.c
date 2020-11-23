/*
 ============================================================================
 Name        : assignment2_1.c
 Author      : abdulrahman yasser
 Description : Check number even or odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int num;
	fflush(stdin); fflush(stdout);
	printf("Enter an integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num%2==0)
	{
		fflush(stdin); fflush(stdout);
		printf("%d is even",num);
	}
	else if(num%2!=0)
	{
		fflush(stdin); fflush(stdout);
		printf("%d is odd",num);
	}

	return 0;
}
