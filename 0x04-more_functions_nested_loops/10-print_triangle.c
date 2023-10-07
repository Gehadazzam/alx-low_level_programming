#include "main.h"
/**
*print_triangle - to print a triangle with #
*
*@size: integer which declare the size of the triangle
*
*Return: (void)
*/
void print_triangle(int size)
{
int i, row, column;
	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
{
		for (i = size - row; i > 1; i--)
			_putchar(' ');
		for (column = 0; column <= row; column++)
			_putchar('#');
		_putchar('\n');
}
}
