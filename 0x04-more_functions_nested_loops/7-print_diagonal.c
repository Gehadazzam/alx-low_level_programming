#include "main.h"
/**
*print_diagonal - draw a diagonal line
*
*@n: the number of the \ to print
*
*Return: (void)
*/
void print_diagonal(int n)
{
int i;
	if (n <= 0)
{
		_putchar('\\');
		_putchar('\n');
}
	else
{
		for (i = 0; i < n; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
}
}
