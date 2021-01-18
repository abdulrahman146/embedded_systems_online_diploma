/*
 ============================================================================
 Name        : lab1
 Author      : abdulrahman yasser
 Description : entering degrees of students and print
 ============================================================================
 */
#include <stdio.h>
int main()
{
	float degrees[10];
    int i;
for(i=1;i<=10;i++){
    printf("Enter student %d degree  ",i);
    scanf("%f",&degrees[i]);
}
for(i=1;i<=10;i++){
    printf("student %d degree is %0.1f \n",i,degrees[i]); 
}
	return 0;
}
