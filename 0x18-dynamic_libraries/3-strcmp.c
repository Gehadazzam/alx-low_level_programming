#include "main.h"
#include <stdio.h>
/**
*_strcmp - compares two strings
*
*@s1: the first string
*
*@s2: the second string
*
*Return: (0) or (<0) or (>0)
*/
int _strcmp(char *s1, char *s2)
{
int i;
int result = 0;
/* use for loop*/
/*calculate the result to compare*/
	for (i = 0; s1[i] != '\0' && result == 0; i++)
{
	result = s1[i] - s2[i];
}
	return (result);
}
