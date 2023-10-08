#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
*main - check for multiplies two positive numbers
*
*_putchar - print a char
*
*@argc: the count of argument
*
*@argv: the array
*
*Return: (void)
*/
int main(int argc, char *argv[])
{
int mul, i, x, y;
	if (argc != 3)
{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
}
	for (i = 1; *argv[i] < 3; i++)
{
		if (!isdigit(argv[i]))
{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('O');
			_putchar('r');
			_putchar('\n');
			exit(98);
}
}
x = atoi(argv[1]);
y = atoi(argv[2]);
mul = (x *y);
	printf("%d\n", mul);
	return (0);
}
