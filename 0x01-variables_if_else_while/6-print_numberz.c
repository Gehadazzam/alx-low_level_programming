#include <stdio.h>
/**
* main - Entry point
*
* Description: Uses the function "putchar" to print single digit
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
	for (i = '0' ; i <= '9' ; i++)
{
		putchar(i);
}
	putchar('\n');
	return (0);
}

