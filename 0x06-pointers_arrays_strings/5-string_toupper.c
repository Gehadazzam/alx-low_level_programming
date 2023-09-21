#include "main.h"
#include <stdio.h>
/**
**string_toupper - changes all lowercase letters of a string to uppercase
*
*@str: pointer to char we need to check
*
*Return: (str)
*/
char *string_toupper(char *str)
{
int k;
	for (k = 0; str[k] != '0'; k++)
{
		if (str[k] >= 'a' && str[k] <= 'z')
{
			str[k] -= 32;
}
}
	return (str);
}
