#include "main.h"
/**
*print_last_digit - print the last digit from a number
*
*@num: number to work on
*
*Return: the num
*/
int print_last_digit(int num)
{
int lastnum = num % 10;
	if (lastnum < 0)
		lastnum = -lastnum;
	_putchar('0' + lastnum);
	return (lastnum);
}
