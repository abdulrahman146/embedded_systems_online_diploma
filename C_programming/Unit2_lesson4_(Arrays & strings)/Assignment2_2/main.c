#include <stdio.h>

int main()
{
    char a[100];
    int i ;
    printf("Enter a string : ");
    gets(a);
    for(i=0;a[i]!=0;i++);
    printf("Length of string is : %d\n",i);
	return 0;
}
