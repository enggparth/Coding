// Category : Function with arguments and return value



#include <stdio.h>

int val(int, int);


void main (void)
{
	int a = 50 , b = 20;
	int x;
	x = val(a,b);
	printf("The addition is = %d \n",x );

}


int val(int x, int y)
{
	
	y =  x+y;
	return(y);
}