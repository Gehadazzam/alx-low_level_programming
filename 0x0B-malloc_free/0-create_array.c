#include "main.h"
#include <stdlib.h>
#include<stdio.h>
/**
*create_array - function that creates an array of chars
*
*@size: unsigned int to check
*
*@c: char to start the array with
*
*Return: (pointer of the array or null)
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
	if (size == 0)
{
	return (NULL);
}
ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
{
		return (NULL);
}
	for (i = 0; i < size; i++)
{
	ptr[i] = c;
}
	return (ptr);
}
