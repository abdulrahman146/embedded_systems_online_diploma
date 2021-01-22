/*
 ============================================================================
 Name        : Assignment1_2
 Author      : abdulrahman yasser
 Description : average of array elements entered by user
 ============================================================================
 */
#include <stdio.h>

int main()
{
    int x,i;
    printf("Enter number of elements: ");
    scanf("%d",&x);
	float a[x];
    float sum=0,average;
    for(i=0;i<x;i++){
        printf("Enter number: ");
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    average=sum/x;
    printf("\n average is: %.2f\n",average);
	return 0;
}

