#include "main.h"
/**
*flip_bits - return the numer of bytes to get flip the int
*
*@n: the first int
*
*@m:seconed one
*
*Return: the bytes
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;
unsigned long int x = n ^ m;
	while (x)
{
		i += x & 1;
		x >>= 1;
}
	return (i);
}
