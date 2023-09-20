#include "main.h"
#include <stdio.h>
/**
*reverse_array - reverses the content of an array of integers
*
*@a: array to check
*
*@n: the number of elements in the array
*
*Return: (0)
*/
void reverse_array(int *a, int n)
{
/*use for loop to deal with the array*/
int i = 0;
int x;
n = n - 1;
	for (i = 0;i < n; i++)
{
	x = a[i];
	a[i] = a[n];
	a[n] = x;
	n--;
}
}
