/*
 ============================================================================
 Name        : lab1
 Author      : abdulrahman yasser
 Description : calculating area or circumference of circle
 ============================================================================
 */
#include <stdio.h>

int main()
{
    float r,area,circumference;
    char choice;
	printf("Enter circle radius ");
    scanf("%f",&r);
    printf("Enter your choice, (a) to calculate area , (c) to calculate circumference\n");
    scanf(" %c",&choice);
    if(choice=='a'){
         area=3.14*r*r;
        printf("area = %f \n",area);
    }
    else if(choice=='c'){
        circumference=2*3.14*r;
        printf("circumference = %f \n",circumference);
    }
    else{
        printf("wrong choice \n");
    }
	return 0;
    
}
