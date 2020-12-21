/*
 ============================================================================
 Name        : lab3
 Author      : abdulrahman yasser
 Description : largest number of 3 numbers
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int x,y,z;
    printf("Enter three numbers please : ");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d is the largest number\n",x);
    }
    else if(y>x && y>z){
        printf("%d is the largest number\n",y);
    }
    else if(z>y && z>x){
        printf("%d is the largest number\n",z);
    }
	return 0;
}
