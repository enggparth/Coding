#include <stdio.h>

//##ifndef SYMBOL
#define ROW 5
#define COL 5

void main(void)
{
	int value[ROW][COL];
	int row[ROW], col[COL];
	int i,j;
/*Multiplication*/
	for ( i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			value[i][j] = (i+1)*(j+1);
		}
	}
/*Output*/

	printf("Multiplication Table\n");
	printf(" ");
	for (i = 0; i < COL; i++)
	{
		printf("%4d",i+1 );

	}
	printf("\n");
	printf("_____________________________\n");

	for (i = 0; i < ROW; i++)
	{	
		printf("%d |", i+1 );
		for (j = 0; j < COL; j++)
		{
			printf("%4d   ",value[i][j] );
		}
		printf("\n");
	}




}
