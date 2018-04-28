/* Add 5 digit without recursive */
#include <stdio.h>
int sum = 0,i;
int a[5];
int main()
{
    for(i=0;i<=4;i++)
    {
    printf("Pleas enter digit\n");
    scanf("%d", &a[i]);
    sum = sum + a[i];
    }
    printf("VAl sum  %d", sum);
}
