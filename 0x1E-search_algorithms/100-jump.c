#include "search_algos.h"
#include <math.h>
/**
*print_array - Prints an array of integers
*
*@array: Pointer to the first element of the array
*@left: Index of the left boundary of the subarray to print
*@right: Index of the right boundary of the subarray to print
*/
void print_array(int *array, size_t left, size_t right)
{
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	printf("Value checked array[%lu] = [%d]\n", right, array[right]);
}

/**
*jump_search - Searches for a value in a sorted array of integers
*
*@array: Pointer to the first element of the array
*@size: Number of elements in the array
*@value: Value to search for
*
*Return: Index where value is located, or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, right, left = 0;

	if (array == NULL || !size || !value)
		return (-1);

	step = right = sqrt(size), left = 0;

	while (right < size && array[right] < value)
	{
		print_array(array, left, right);
		left = right;
		right += step;
	}

	print_array(array, left, right);

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
