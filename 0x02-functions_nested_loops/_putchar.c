#include "main.h"
#include <unistd.h>

/**
*_putchar - Print one character
*
* @c: charachter to be checked
*
*Return: (write(1, &c, 1))
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
