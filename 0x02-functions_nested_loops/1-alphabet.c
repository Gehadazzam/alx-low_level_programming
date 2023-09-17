#ifndef MAIN
#define MAIN
#include "main.h"
/**
*print_alphabet - Print the alphapet
*
*Description: main - Entry point
*
*@ch - character to be checked
*
* Return: (0) success
*/
#endif
void print_alphabet(void)
{
char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
{
		_putchar(ch);
		_putchar('\n');
}
}
int main(void)
{
	print_alphabet();
	return (0);
}
