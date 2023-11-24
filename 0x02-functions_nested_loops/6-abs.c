#include "main.h"
/**
*_abs - get the absolute value
*
*@num: number to check
*
*Return: the value
*/
int _abs(int num)
{
	if (num == 0)
		return (0);
	if (num < 0)
		return (-(num));
	if (num > 0)
		return (num);
}
