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
dog_t *apt;
	if (!name || age < 0 || !owner)
		return (NULL);
apt = malloc(sizeof(dog_t));
	if (apt == NULL)
		return (NULL);
	apt->name = malloc(sizeof(name));
	if (apt->name == NULL)
{
		free(apt);
		return (NULL);
}
	apt->owner = malloc(sizeof(owner));
	if (apt->owner == NULL)
{
		free(apt->name);
		free(apt);
		return (NULL);
}
	apt->age = age;
	strcpy(apt->name, name);
	strcpy(apt->owner, owner);
	return (apt);
}
