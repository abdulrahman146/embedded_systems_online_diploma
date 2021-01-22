/*
 ============================================================================
 Name        : Assignment1_5
 Author      : Abdulrahman yasser
 Description : Searching for element in an array
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int arr[10];
    int i,x,y;
    printf("Enter number of elements : ");
    scanf("%d",&x);
    printf("Enter the elements : \n");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++){
        printf("\t%d\t",arr[i]);
    }
    printf("\n\n Enter the element to be searched : ");
    scanf("%d",&y);
    for(i=0;i<x;i++){
        if(y!=arr[i]){
           continue;
        }
        else{
            printf("Number found at the location : %d\n",i+1);
            break;
        }
    }
    if(i==x){
        printf("Number not found !\n");
    }
	return 0;
}
