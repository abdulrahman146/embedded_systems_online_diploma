/*
 ============================================================================
 Name        : lecture quiz
 Author      : abdulrahman yasser
 Description : find centre values
 ( centre ) means that the previous & the next values are lower than the centre value
 ============================================================================
 */
#include <stdio.h>

int main()
{
	unsigned int x[50];// 50 instead of 1000 for simplification to check results
    int i,centre_value;
    for(i=0;i<50;i++){
        x[i]=rand()%50; // to limit rand() from 0 to 50
        printf("%d\n",x[i]);
    }
    printf("\n\n << centre values >>\n");
    for(i=1;i<50;i++){
        if(x[i]>(x[i+1])&&x[i]>(x[i-1])){
         centre_value=x[i];
         printf("%d\n",centre_value);
        }
    }
	return 0;
}
