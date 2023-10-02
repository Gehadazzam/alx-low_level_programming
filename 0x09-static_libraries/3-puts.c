#include "main.h"
/**
*_puts - print a string
*
*@str: string to be checked
*
*Return: (0) success
*/
void _puts(char *str)
{
	while (*str != 0)
{
		_putchar(*str++);
}
		_putchar('\n');
}
