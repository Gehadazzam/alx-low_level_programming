#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
*main - check for multiplies two positive numbers
*
*_putchar - print a char
*
*Return: (void)
*/
int main(int argc, char *argv[])
{
int mul, i, num1, num2;
char x = "Error";
	if (argc != 3)
{
		_putchar(x);
		_putchar('\n');
		exit (98);
}
	for (i = 0; argv[1][i] != '\0'; i++)
{
		if (!isdigit(argv[1][i])
{
			_putchar(x);
			_putchar('\n');
			exit (98);
}
}
	for (i = 0; argv[2][i] != '\0'; i++)
{
		if (!isdigit(argv[2][i])
{
			_putchar(x);
			_putchar('\n');
			exit (98);
}
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 * num2;
	_putchar(mul);
	return (0);
}
