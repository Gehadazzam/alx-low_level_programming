#include "main.h"
#include <stdio.h>
/**
*print_rev - print string reverse
*
*@s: string to be checked
*
*Return: (0) success
*/
void print_rev(char *s)
{
int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
{
		_putchar(s[i]);
}
		_putchar('\n');
}
