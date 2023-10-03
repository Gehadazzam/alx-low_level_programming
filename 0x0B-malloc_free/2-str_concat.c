#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*str_concat - concatenates two strings
*
*@s1: first string
*
*@s2: second string
*
*Return: (pointer or NULL)
*/
char *str_concat(char *s1, char *s2)
{
int i, j, length_s1, length_s2;
char *ptr;
	length_s1 = (s1 != NULL) ? strlen(s1) : 0;
	length_s2 = (s2 != NULL) ? strlen(s2) : 0;
ptr = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length_s1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < length_s2; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
