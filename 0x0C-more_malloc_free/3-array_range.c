#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*array_range - creat an array of integers
*
*@min: start of the array
*
*@max: end of the array
*
*Return: (pointer to the array or NULL)
*/
int *array_range(int min, int max)
{
int i, *a;
	if (min > max)
		return (NULL);
a = malloc((max - min + 1) * sizeof(int));
	if (a == 0)
		return (NULL);
i = 0;
	while (min <= max)
{
		a[i] = min;
		i++;
		min++;
}
	return (a);
}
