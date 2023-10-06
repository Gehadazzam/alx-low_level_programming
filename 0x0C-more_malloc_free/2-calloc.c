#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_calloc - allocate memory f an array
*
*@nmemb: the array
*
*@size: the bytes of the memory
*
*Return: (void)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
	if (nmemb == 0 || size == 0)
		return (NULL);
ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (NULL);
	memset(ptr, 0, size * nmemb);
	return (ptr);
}
