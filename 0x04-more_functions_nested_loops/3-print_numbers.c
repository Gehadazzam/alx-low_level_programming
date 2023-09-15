#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* Description: use "print_numbers" to print specific numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	print_numbers();
	return (0);
}
/**
*print_numbers - print specific numbers
*return (0)
*/
void print_numbers(void)
{
	char c = '0';

	for (c = '0' ; c <= '9' ; c++)
{
		_putchar(c);
}
		_putchar('\n');
}
