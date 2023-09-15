#include "main.h"
#include <stdio.h>
/**
* main - write a function prints the numbers, from 0 to 9
* Return: Always 0 (Success)
*/
int main(void)
{
	print_numbers();
	return (0);
}
void print_numbers(void)
{
	char c = '0';

	for (c = '0' ; c <= '9' ; c++)
{
		_putchar(c);
}
		_putchar('\n');
}
