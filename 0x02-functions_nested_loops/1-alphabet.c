#include "main.h"
/**
*print_alphabet - Print the alphapet
*
* main - Entry point
*
*@ch - character to be checked
*
* Return: (0) success
*/
void print_alphabet(void)
{
	for (char ch = 'a' ; ch <= 'z' ; ch++)
{
		_putchar(ch);
		_putchar('\n');
}
}
/*main - Entry point*/
int main(void)
{
	print_alphabet();
	return (0);
}
