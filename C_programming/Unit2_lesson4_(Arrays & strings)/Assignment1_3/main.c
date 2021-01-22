/*
 ============================================================================
 Name        : Assignment1_3
 Author      : Abdulrahman yasser
 Description : Finding Transpose of matrix
 ============================================================================
 */
#include <stdio.h>

int main()
{
    int mat[10][10],trans[10][10];
    int i,j,x,y;
    printf("Enter rows and columns of matrix : ");
    scanf("%d  %d",&x,&y);
    printf("Enter elements of matrix :\n");
    for(i=0; i<x;i++){
        for(j=0; j<y;j++){
            printf("Enter element mat%d%d : ",i, j);
            scanf("%d",&mat[i][j]);
        }
    }
     printf("Entered matrix : \n ");
     //displaying the matrix
    for(i=0 ; i<x ; i++){
        for(j=0 ; j<y ; j++){
            printf("%d\t",mat[i][j]);
        }
        printf(" \n");
    }
    //finding the transpose
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            trans[j][i]=mat[i][j];
        }
    }
     printf("Transpose of matrix :\n");
     //displaying the transpose
         for(i=0 ; i<y ; i++){
        for(j=0 ; j<x ; j++){
            printf("%d\t",trans[i][j]);
        }
        printf(" \n");
    }
    
	return 0;
}
