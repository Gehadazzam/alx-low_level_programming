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
	for (ch = 'a' ; ch <= 'z' ; ch++)
	if (ch != 'q' && ch != 'e')
{
		putchar(ch);
}
	putchar('\n');
	return (0);
}