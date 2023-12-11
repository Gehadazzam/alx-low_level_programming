#include "main.h"
#include <stdio.h>
/**
**_strcat - concatenates two strings
*
*@dest: the first string
*
*@src: the second string
*
*Return: (*dest)
*/
char *_strcat(char *dest, char *src)
{
/*use while loop to get what's inside src and put it inside dest*/
int i;
int j;
j = 0;
	while (dest[j] != '\0')
{
	j++;
}
i = 0;
	while (src[i] != '\0')
{
	dest[j] = src[i];
	j++;
	i++;
}
	dest[j] = '\0';
	return (dest);
}
