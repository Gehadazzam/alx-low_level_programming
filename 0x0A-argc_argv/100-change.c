#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
int coins = 0;
int coins_val[5] = {25, 10, 5, 2, 1};
int centos;
	if (argc != 2)
{
		printf("Error\n");
		return (1);
}
centos = atoi(argv[1]);
		if (centos < 0)
{
			printf("0\n");
}
		for (i = 0; i < 5; i++)
{
			while (centos >= coins_val[i])
{
				centos -= coins_val[i];
				coins++;
}
}
	printf("%d\n", coins);
	return (0);
}
