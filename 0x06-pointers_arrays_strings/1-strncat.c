#include "main.h"
#include <stdio.h>
/**
**_strncat - concatenates two strings
*
*@dest: the first string
*
*@src: the second string
*
*@n: represents a maximum number of characters
*
*Return: (*dest)
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != 0 && j < n; j++)
{
	dest[i + j] = src[j];
}
	return (dest);
}
