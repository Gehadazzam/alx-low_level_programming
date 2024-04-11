#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high = 0, i;

	if (!array || size == 0)
		return (-1);

	i = sqrt(size);

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			high, array[high]
		);
		low = high;
		high += i;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		low, high
	);

	while (low <= ((high < size) ? high : size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n",
			low, array[low]
		);
		if (array[low] == value)
			return (low);
		low++;
	}

	return (-1);
}
