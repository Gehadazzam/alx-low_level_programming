#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - allocate memory using malloc
*
*@b: unsigned integer to be checked
*
*Return: (void)
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);
}
