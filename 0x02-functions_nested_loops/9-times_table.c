#include "main.h"
/**
*times_table - print a tme table
*
*Return: void
*/
void times_table(void)
{
int i, j, num;
	for (i = 1; i <= 9; i++)
{
		for (j = 0; j <= 9; j++)
{
			num = j * i;
			if (num < 10)
{
				_putchar('0' + num);
}
			else
{
				_putchar('0' + num / 10);
				_putchar('0' + num % 10);
}
			if (j < 9)
{
				_putchar(',');
				_putchar(' ');
}
}
		_putchar('\n');
}
}
