#include "main.h"
/**
*_isalpha - checks for alphabetic character
*
* @c: integer to be checked
*
* Return: (1) if c is letter
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
		return (1);
}
	else
{
		return (0);
}
}
