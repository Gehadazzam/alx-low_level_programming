#include "main.h"
/**
*swap_int - swap the value of two function
*
* @a: first integer
*
* @b: second integer
*
*Return: (0) always
*/
void swap_int(int *a, int *b)
{
int ch = *a;
*a = *b;
*b = ch;
}
