/*
 ============================================================================
 Name        : lab4
 Author      : abdulrahman yasser
 Description : average degrees for desired num of students
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int i,j;
    float average,degree,sum=0;
    printf("Enter number of students : ");
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        printf("Enter student %d degree : ",j);
        scanf("%f",&degree);
        sum+=degree;
    }
    average=sum/i;
    printf("The average of degrees is %f ",average);
	return 0;
}
