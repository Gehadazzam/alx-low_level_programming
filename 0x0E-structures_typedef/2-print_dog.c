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
	d->name = (name == NULL) ? "(nil)" : name;
	d->owner = (owner == NULL) ? "(nil)" : owner;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
