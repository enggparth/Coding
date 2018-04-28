#include <stdio.h>

#define MAXGIRL	4
#define MAXITEM	3

void main(void)
{

int value[MAXGIRL][MAXITEM];
int girl_total[MAXGIRL], item_total[MAXITEM];
int i,j,grand_total;


/* Input from USER   */
	printf("Enter the value in row wise \n\n");
	for (i = 0; i < MAXGIRL; i++)
	{
		girl_total[i] = 0;
		for (j = 0; j < MAXITEM; j++)
		{
			scanf(" %d ", value[i][j] );
			girl_total[i] = girl_total[i] + value[i][j];

		}

	}

/* Total of each item */

	for (j = 0; j < MAXITEM; j++)
	{
		item_total[j] = 0;
		for ( i = 0; i < MAXGIRL; i++)
		{
			item_total[j] = item_total[j] + value[i][j];
		}
	}

/*   Grand total*/
	grand_total = 0;
	for (i = 0; i < MAXGIRL; i++)
		{
			grand_total = grand_total + girl_total[i];
		}	

/*Print the output*/

		printf("GIRLS TOTAL\n\n");

		for (i = 0; i < MAXGIRL; i++)
		{
			printf("Sale girs [%d] = %d \n", i+1,girl_total[i] );
		}
		printf("ITEMS TOTAL\n\n");

		for (j = 0; j < MAXITEM; j++)
		{
			printf("ITEM[%d] = %d \n",j+1,item_total[j] );
		}

		printf("GRAND TOTAL = %d\n", grand_total);
}