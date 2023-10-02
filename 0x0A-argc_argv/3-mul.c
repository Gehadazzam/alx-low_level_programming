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
int main(int argc, char *argv[])
{
int i, multi = 1, arg;
	if (argc < 3)
{
	printf("Error\n");
	return (1);
}
	else
{
		for (i = 1; i < argc; i++)
{
			arg = atoi(argv[i]);
			if (arg == 0 && argv[i][0])
{
				printf("Error\n");
				return (1);
}
			else
				multi *= arg;
}
		 printf("%d\n", multi);
}
	return (0);
}
