#include "main.h"
/**
*square_number - find the square root
*
* @n: integer to be checked
*
*@z: integer to check
*
*Return: (squarenumber)
*/
int square_number(int n, int z)
{
	if (z * z > n)
{
		return (-1);
}
	else if (z * z == n)
{
		return (z);
}
	return (square_number(n, z + 1));
}
/**
*_sqrt_recursion - return the square root
*
*@n: integer to be checked
*
*Return: (number) or(-1)
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
{
		return (-1);
}
	return (square_number(n, 0));
}
