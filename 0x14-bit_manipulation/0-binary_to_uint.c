#include "main.h"
/**
*binary_to_uint - convert a binary to uninsigned int
*
*@b: pointer to the array
*
*Return: the unsigned int or 0
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int cat = 0;
	if (b == NULL)
		return (0);
	while (b[i] == '0' ||
			b[i] == '1')
{
		cat <<= 1;
		cat += b[i] - '0';
		i++;
}
	if (b[i] != '\0')
		return (0);
	return (cat);
}
