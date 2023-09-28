#include "main.h"
#include <string.h>
/**
*check_palindrome - check if the string is palindrome
*
*@x: first integer
*
*@y: second integer
*
*@s: pointer to a string to be checked
*
*Return: (1 if a string is a palindrome and 0 if not)
*/
int check_palindrome(char *s, int x, int y)
{
	if (x > y)
		return (1);
	else if (s[x] == s[y])
{
		return (check_palindrome(s, x + 1, y - 1));
}
	else
{
	return (0);
}
}
/**
*is_palindrome - check if the string is palindrome
*
*@s: pointer to a string to be checked
*
*Return: (1 if a string is a palindrome and 0 if not)
*/
int is_palindrome(char *s)
{
int length = strlen(s);
	if (length == 0 || length == 1)
		return (1);
	return (check_palindrome(s, 0, length - 1));
}
