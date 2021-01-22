/*
 ============================================================================
 Name        : Assignment2_1
 Author      : Abdulrahman yasser
 Description : Finding frequency of letter in a string
 ============================================================================
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char x;
    int i, freq=0;
    printf("Enter a string : ");
    gets(a);
    printf("Enter a character to find its frequency : ");
    scanf("%c",&x);
    for(i=0;i<strlen(a);i++){
        if(x==a[i]){
            freq+=1;
        }
    }
    printf("Frequency of %c is : %d\n",x,freq);
	return 0;
}
