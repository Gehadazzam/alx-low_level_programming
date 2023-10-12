#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - variadic function which add the arguments
*
*@n: the count of the arguments
*
*Return: (sum or 0)
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list pwd;

int total;
unsigned int x;

	if (n == 0)
		return (0);


	va_start(pwd, n);

total = 0;
	for (x = 0; x < n; x++)
		total += va_arg(pwd, int);

	va_end(pwd);

	return (total);
}
