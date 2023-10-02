#include <stdio.h>
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
int main(int argc, char *argv[])
{
int i;
	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
