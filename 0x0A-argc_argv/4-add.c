#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - Entry point
*
*@argc: parameter of count the array
*
*@argv: pointer of array
*
* Return: (0)
*/
int main(int argc, char *argv[]);
{
int i, sum = 0;
	if (argc < 2)
		printf("0\n");
	else
{
	for (i = 1; i < argc; i++)
{
		if (isNumeric(argv[i]))
{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
}
		else
{
			printf("Error\n");
			return (1);
}
}
	return (0);
}
/**
*isNumeric - check if the input is number
*
*@str: pointer for the string
*
*Return: (1)
*/
int isNumeric(char *argv)
{
	while (*argv != '\0')
{
		if (*argv < '0' || *argv > '9')
			return (0);
		argv++;
}
	return (1);
}
