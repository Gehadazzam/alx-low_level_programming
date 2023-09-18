#include "main.h"
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
	for (n = 0; n < 5; n++)
{
	printf ("%i, ", *a);
	a++;
}
	printf ("\n");
}
