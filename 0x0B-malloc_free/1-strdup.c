#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*
*@str: char to be checked
*
*Return: (pointer or NULL)
*/
char *_strdup(char *str)
{
int i;
char *p;
int length = strlen(str);
	if (str == NULL)
		return (NULL);
p = malloc(length + 1 * sizeof(char));
	for (i = 0; i < length; i++)
		p[i] = str[i];
	if (p == NULL)
		return (NULL);
	return (p);
}
