#include "main.h"
/**
*_strlen - calculate the length
*
*@s: char to be checked
*
* Return: len of the string
*/
int _strlen(char *s)
{
int i = 0;
	while (*s != 0)
{
	i++;
	s++;
}
	return (i);
}
