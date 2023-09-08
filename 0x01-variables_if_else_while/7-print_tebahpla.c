#include <stdio.h>
/**
* main - Entry point
*
* Description: Uses the function "putchar" to print the alphapet
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;
	for (ch = 'z' ; ch >= 'a' ; ch--)
{
		putchar(ch);
}
	putchar('\n');
	return (0);
}
