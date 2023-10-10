#include <stdio.h>
#include "dog.h"
/**
*print_dog - print what's inside the struct
*@d: pointer to the struuct
*
*Return: (void)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)");
	else if (d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
}
