#include "main.h"
/**
*is_prime_number - distingue the prime numbers
*
*@n: integer to be checked
*
*Return: (1 if the input integer is a prime number, otherwise return 0)
*/
int is_prime_number(int n)
{
int z = 2;
	if ((n % z) == 0
			|| n < 0
			|| n == 1)
{
		return (0);
}
	else
{
		return (1);
}
}

