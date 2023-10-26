#include "main.h"
/**
*set_bit - make the value of a bit = 1
*
*@n: int to be convert
*
*@index: the bit we will convert
*
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int cat;
	if (index >= sizeof(unsigned long int) * 8 ||
			n == NULL)
		return (-1);
	cat = 1UL << index;
	*n |= cat;
	return (1);
}
