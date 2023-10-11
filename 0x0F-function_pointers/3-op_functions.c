#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*op_add - add two integers
*
*@a: first integer
*@b: seconed integer
*
*Return: the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - substract two integers
*
*@a: first integer
*@b: seconed integer
*
*Return: the substract
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul - multiply two integers
*
*@a: first integer
*@b: seconed integer
*
*Return: (a * b)
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - divide two integers
*
*@a: first integer
*@b: seconed integer
*
*Return: (a / b)
*/
int op_div(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
		exit(100);
}
	return (a / b);
}
/**
*op_mod - return the rest of divide two integers
*
*@a: first integer
*@b: seconed integer
*
*Return: the modile
*/
int op_mod(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a % b);
}
