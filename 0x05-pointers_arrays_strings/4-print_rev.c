#include "main.h"
#include <stdio.h>
/**
*print_rev - print string reverse
*
*@str: string to be checked
*
*Return: (0) success
*/
void print_rev(char *str)
{
char i, len, x;
len = _strlen(*str);
	for (i=0; i < len; i++)
{
x = str[i];
str[i] = str[len-i-1];
str[len-i-1] = x;
}
}
