#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings
*
*@s1: first string
*
*@s2: seconed string
*
*@n: the bites of memory
*
*Return: (pointer or NULL)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, j, length_s1, length_s2;
	length_s1 = (s1 != NULL) ? strlen(s1) : 0;
	length_s2 = (s2 != NULL) ? strlen(s2) : 0;
	if (n >= length_s2)
		n = length_s2;
ptr = malloc(length_s1 + n + 1);
	if (ptr == NULL)
		return	(NULL);
	for (i = 0; i < length_s1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
