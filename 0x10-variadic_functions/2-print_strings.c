#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - variabble fuction which print some strings
*
*@separator: char to seprate the strings
*
*@n: the count of the strings
*
*Return: (void)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list apt;

unsigned int i;
char *name;
va_start(apt, n);
	for (i = 0; i < n; i++)
{
		name = va_arg(apt, char*);
		if (name == NULL)
			printf("(nil)");
		else
			printf("%s", name);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
}
	printf("\n");
	va_end(apt);
}
