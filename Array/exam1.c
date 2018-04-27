#include<stdio.h>

void main()
{
	/* Initialize */
	int i;
	float val[10], sum = 0;


	/* take the input from user*/
	printf("Enter the ten number \n");
	for (i = 0; i < 10; i++)
	{
		
		scanf("%f \n", &val[i]);
	}
	/* Calculate ten number*/
	for (i = 0; i < 10; i++)
	{
		sum = sum + val[i];
	}

	/* Print the output*/

	for (i = 0; i < 10; i++)
	{
		printf("%f \n",val[i]);

	}

	printf("Sum of all number is =  %f \n", sum);

}
