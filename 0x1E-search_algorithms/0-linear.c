#include "search_algos.h"
/**
*linear_search - searches for a value in an array of integers
*
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*
*Return: If val is not present or if arr is NULL, your function must return -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;


	if (array == NULL || !size || !value)
		return (-1);
	for (; counter < size; counter++)
	{
		printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
	}
	return (-1);
}
