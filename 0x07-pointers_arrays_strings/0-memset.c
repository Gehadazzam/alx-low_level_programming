#include "main.h"
/**
*_memset - fills memory with a constant byte
*
*@s: pointer to the area we will fill
*
*@b: char contain the data
*
*@n: uninsigned int to start with
*
*Return: (*S)
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
	for (i = 0; n > 0; i++, n--)
{
	s[i] = b;
}
	return (0);
}
