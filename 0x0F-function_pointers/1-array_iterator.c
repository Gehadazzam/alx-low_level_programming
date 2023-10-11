#include <stddef.h>
#include "function_pointers.h"
/**
*array_iterator - fuction excute another function
*
*@array: pointer to the array
*@size: the size of the array
*
*@action: pointer to the function
*
*Return: (void)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
	if (array == NULL
			|| action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
