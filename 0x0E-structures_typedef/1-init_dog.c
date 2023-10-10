#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initialize variable to test stuct dog
*
*@d: pointer to the struct
*
*@name: first member
*@age: seconed member
*@owner: third member
*
*Return: (void)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
