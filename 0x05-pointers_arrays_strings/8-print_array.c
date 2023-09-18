#include <stdio.h>
/**
*print_array - print elements of array
*
*@a: array to be checked
*
*@n: number of elements of the array
*
*Return: (0) success
*/
void print_array(int *a, int n)
{
int y;
	for (y = 0; y < n; y++)
{
	printf("%d", a[y]);
	if (y != n-1)
{
	printf(", ");
}
}
	printf("\n");
}
