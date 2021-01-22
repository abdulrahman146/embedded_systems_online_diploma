/*
 ============================================================================
 Name        : Assignment2_3
 Author      : Abdulrahman yasser
 Description : Reverse of string 
 ============================================================================
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char r[100];
    int i;
	printf("Enter a string : ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        r[strlen(a)-i-1]=a[i];
    }
    r[strlen(a)]=0;
    printf("Reverse string is : %s\n",r);
	return 0;
}
