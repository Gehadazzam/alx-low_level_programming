#include "main.h"
/**
**_strchr - locates a character in a string
*
*@*s: pointer to the char
*
*@c: char to be located
*
*Return: (*s)
*/
char *_strchr(char *s, char c)
{
int i;
	for (i = 0; i >= '\0'; i++)
{
	if (c == s[i])
	return (s + i);
}
	return ('\0');
}
