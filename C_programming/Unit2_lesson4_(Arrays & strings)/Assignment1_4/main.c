/*
 ============================================================================
 Name        : Assignment1_4
 Author      : Abdulrahman yasser
 Description : Insert new element to the array
 ============================================================================
 */
#include <stdio.h>

int main()
{
    int arr[10];
    int x,element,i,location;
    printf("Enter number of elements : ");
    scanf("%d",&x);
    printf("Enter the elements :\n");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    printf("\n Enter the element to be inserted : ");
    scanf("%d",&element);
    again:
    printf("Enter the location: ");
    scanf("%d",&location);
    if(location<=x&&location>0){
       for(i=x;i>=location;i--){
           arr[i]=arr[i-1];
           }
       }
    else{
        printf(" << Invalid input >>\n");
        goto again;
    }
    x++;
    arr[location-1]=element;
   
     for(i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
	return 0;
}
