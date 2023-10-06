#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_realloc - reallocates a memory block using malloc and free
*
*@ptr: pointer
*
*@old_size: the size we will change
*
*@new_size: the new size
*
*Return: (ptr or NULL)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *rptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
{
		free(ptr);
		return (NULL);
}
rptr = malloc(new_size);
	if (new_size > old_size)
		memcpy(rptr, ptr, old_size);
	else
		memcpy(rptr, ptr, new_size);
	free(ptr);
	return (rptr);
}
