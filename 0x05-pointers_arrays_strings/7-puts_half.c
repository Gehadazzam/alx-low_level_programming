#include "main.h"
#include <stdio.h>
/**
*puts_half - prints the second half of the string
*
*@str: string to be checked
*
*Return: (0) success
*/
void puts_half(char *str)
{
int half, n;
n = 0;
	while (str[n] != '\0')
{
	n++;
}
half = n  / 2;
	if (n % 2 == 1)
{
	half++;
}
	while (half < n)
{
	_putchar(str[half]);
	half++;
}
	_putchar('\n');
}
