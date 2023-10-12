#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - varadic function which print some numbers
*
*@separator: char to seprate the numbers
*
*@n: the count of the numbers
*
*Return: (void)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list apt;

unsigned int i;
	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(apt, n);

	for (i = 0; i < n; i++)
{
		printf("%d", va_arg(apt, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
}
	va_end(apt);

	printf("\n");
}
