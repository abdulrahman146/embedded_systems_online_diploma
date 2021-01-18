/*
 ============================================================================
 Name        : lab2
 Author      : abdulrahman yasser
 Description : Transpose matrix
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int matrix[3][3];
    int transpose[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("Enter value of element [%d][%d] ",i,j);
        scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            transpose[i][j]=matrix[j][i];
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    	return 0;
}
