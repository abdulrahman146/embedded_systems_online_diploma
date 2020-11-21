/*
 * main.c
 *
 *  Created on: Nov 9, 2020
 *      Author: hp
 */
#include"stdio.h"

void main()
{
	unsigned char i,j;
	for(j=0;j<=9;j++){

		for(i=j;i<=9;i++){
			printf("%d\t",i);
		}
		printf("\r\n");
	}
}

