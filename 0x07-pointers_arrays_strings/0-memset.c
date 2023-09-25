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
int i = 0;
	while (n > 0)
{
	s[i] = b;
	i++;
	n--;
}
	return (0);
}
