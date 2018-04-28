// Category : Function with no  arguments and but return value



#include <stdio.h>

int val(void);


void main (void)
{
	int x;
	x = val();
	printf("The addition is = %d \n",x );

}


int val()
{
	int y;
	int a = 50 , b = 20;
	y =  a+b;
	return(y);
}