#include "main.h"
/**
*print_binary - print the int in base 2
*
*@n: int to convert
*
*Return: void
*/
void print_binary(unsigned long int n)
{
int x = 0;
unsigned long int y;
	for (y = 1UL << 63; y > 0; y >>= 1)
{
		if ((n & y) ||
				x)
{
			x = 1;
			(n & y) ? _putchar ('1') : _putchar ('0');
}
}
	if (!x)
	_putchar ('0');
}
