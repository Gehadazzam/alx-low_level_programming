#include <stdio.h>
#include "main.h"
/**
*print_diagsums - prints the sum of the two diagonals of a square matrix
*
*@*a: pointer of array to check
*
*@size: size of array
*
*Return: (void)
*/ 
void print_diagsums(int *a, int size)
{
int i, x, z;
	for (i = 0; i < size; i++)
{
x = 0;
z = 0;
x += a[i];
z += a[size - i - 1];
a += size;
	printf(%d, x);
	printf("%d\n", z);
}
}
