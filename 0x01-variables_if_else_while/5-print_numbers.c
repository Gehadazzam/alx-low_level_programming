#include <stdio.h>
/**
* main - Entry point
*
* Description: Uses the function "putchar" to print single digit
* Return: Always 0 (Success)
*/
int main(void)
{
char ch = '0';
	for (ch = '0' ; ch <= '9' ; ch++)
{
		putchar(ch);
}
	putchar('\n');
	return (0);
}
