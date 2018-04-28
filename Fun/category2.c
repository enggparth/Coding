// Category : Function with arguments and no return value



#include <stdio.h>

int val(int, int);


void main (void)
{
	int a = 50 , b = 20;
	val(a,b);
	

}


int val(int x, int y)
{
	
	y =  x+y;
	printf("The addition is = %d \n",y );
}