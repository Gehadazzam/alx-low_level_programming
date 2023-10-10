#include <stdlib.h>
#include "dog.h"
/**
*free_dog - free the previous allocated memory
*
*@d: pointer to the memory
*
*Return: (void)
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
