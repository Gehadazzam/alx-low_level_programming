#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints all natural numbers from n to 98, followed by a new line.
*
*@n: integer to check
*
*Return: (0) always
*/
void print_to_98(int n)
{
	for (; n <= 98; n++)
{
		if (n == 98)
{
			printf("%d\n", n);
			break;
}
		else
{
			printf("%d, ", n);
}
}
	for (; n >= 98; n--)
{
		if (n > 98)
			printf("%d, ", n);
		else
{
			printf("%d\n", n);
			break;


}
}
}
