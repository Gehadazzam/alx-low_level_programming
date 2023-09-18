#include "main.h"
/**
*puts2 - prints every other character of a string
*
*@s: string to be checked
*
*Return: (0) success
*/
void puts2(char *s)
{
int i = 0;
	for (; s[i] != 0, i++)
{
	if (i % 2 == 0)
{
		_putchar(s[i]);
}
}
		_putchar('\n');
}
