#include <stdio.h>
/**
*main - Entry point
*
* putchar - prints all possible combinations of single-digit numbers
*
* Return: (0) always
*/
int main(void)
{
int i;
	for (i = 0; i < 10; i++)
{
	putchar(i + '0');
	if (i < 9)
{
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
