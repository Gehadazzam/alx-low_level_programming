#include "main.h"
/**
*_strlen_recursion - return the length of string
*
*@s: pointer to the string
*
*Return: (length)
*/
int _strlen_recursion(char *s)
{
int length = 0;
	if (*s != '\0')
{
		length += _strlen_recursion(s + 1) + 1;
}
			return (length);
}
