#include "main.h"
/**
*_memcpy - copies memory area
*
*@dest: pointer to the area we will paste
*
*@src: char contain the data
*
*@n: uninsigned int to start with
*
*Return: (*dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int lm = 0;
	while (lm < n)
{
	dest[lm] = src[n];
	lm++;
}
	return (dest);
}
