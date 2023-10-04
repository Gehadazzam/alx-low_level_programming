#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*argstostr - concatenates all the arguments of your program
*
*@ac: count of the arguments
*
*@av: the array we will check
*
*Return: (pointer or NULL)
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0, length = 0;
char *ptr;
	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;
ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++, k++)
		ptr[k] = av[i][j];
	ptr[k++] = '\n';
}
	ptr[k] = '\0';
	return (ptr);
}
