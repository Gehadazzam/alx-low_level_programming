#include "main.h"
#include <stdio.h>
/**
**_strncpy - concatenates two strings
*
*@dest: the first string
*
*@src: the second string
*
*@n: represents a maximum number of characters
*
*Return: (*dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
	for (i = 0; src[i] != '\0' && i < n; i++)
{
		dest[i] = src[i];
		/*dest[i] = '\0';*/
}
	for ( ; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
