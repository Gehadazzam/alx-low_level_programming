#include "search_algos.h"

/**
*print_array - Prints an array of integers
*@array: Pointer to the first element of the array
*@left: Index of the left boundary of the subarray to print
*@right: Index of the right boundary of the subarray to print
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t ptr;

	printf("Searching in array: ");
	for (ptr = left; ptr <= right; ptr++)
	{
		printf("%d", array[ptr]);
		if (ptr < right)
			printf(", ");
	}
	printf("\n");
}

/**
*binary_search - Searches for a value in a sorted array of integers
*
*@array: Pointer to the first element of the array
*@size: Number of elements in the array
*@value: Value to search for
*
*Return: Index where value is located, or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, middle = 0;

	if (array == NULL || !size || !value)
		return (-1);

	left = 0, right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
