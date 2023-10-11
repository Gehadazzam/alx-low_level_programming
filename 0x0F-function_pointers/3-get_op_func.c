#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*get_op_func - execute the others functions
*
*@s: the optiones to choose the function
*
*Return: (option or Error)
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	while (ops[i].op != NULL)
{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
}
	printf("Error\n");
	exit(99);
}
