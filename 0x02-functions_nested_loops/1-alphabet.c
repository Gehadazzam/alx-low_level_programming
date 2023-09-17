#include "main.h"
/**
*print_alphabet - Print the alphapet
*
*@ch - character to be checked
*
* Return: (0) success
*/
void print_alphabet(void)
{
char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
{
		_putchar(ch);
		_putchar('\n');
}
}
/**
* main - Entry point
*
* Return: (0) success
*/
int main(void)
{
	print_alphabet();
	return (0);
}
