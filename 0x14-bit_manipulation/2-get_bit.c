#include "main.h"
/**
*get_bit - get the value of bit
*
*@n: number to be checked
*
*@index: to determain the value
*
*Return: the index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int cat;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	cat = 1UL << index;
	return ((n & cat) ? 1 : 0);
}
