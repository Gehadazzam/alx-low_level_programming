#include "main.h"
/**
*clear_bit - set the value to 0
*
*@n: int to convert
*
*@index: the bit we will convert
*
*Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 ||
			n == NULL)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
