/*
 ============================================================================
 Name        : Assignment1_1
 Author      : abdulrahman yasser
 Description : sum of two matrix
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int a[2][2],b[2][2],sum[2][2];
    int i,j;
    printf("Enter the elements of 1st matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\t<< sum of matrix >>\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("\t%d\t",sum[i][j]);
        }
        printf("\n");
    }
	return 0;
}