#include "function_pointers.h"
/**
*int_index - fuctionthat searsh for the integer
*
*@array: pointer to the array
*
*@size: size of the array
*
*@cmp: pointer to the function we will check
*
*Return: (index or -1)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
	return (-1);
}
