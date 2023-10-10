#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
*new_dog - fill the data of our first dog
*
*@name: the name of the dog
*@age: his age
*@owner: the owner of the dog
*
*Return: the data of our dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_apt = malloc(sizeof(dog_t));
	if ((new_dog_apt) == NULL)
		return (NULL);
	new_dog_apt->name = malloc(sizeof(name));
	new_dog_apt->owner = malloc(sizeof(owner));
	new_dog_apt->age = age;
	strcpy(new_dog_apt->name, name);
	strcpy(new_dog_apt->owner, owner);
	free(new_dog_apt);
	free(new_dog_apt->name);
	free(new_dog_apt->owner);
	return (new_dog_apt);
}
