#include "main.h"
#include <stdio.h>
/**
**leet - encodes a string into 1337
*
*@s: string to be encoded
*
*Return: (char)
*/
char *leet(char *s)
{
/*
* 2 loops, 1 if
* use c , n to determain the letters and numbers
*/
int i = 0;
int j = 0;
char c[] = "aAeEoOtTlL";
char n[] = "4433007711";
	for (i = 0; s[i] != '\0'; i++)
{
		for (j = 0; c[j] != '\0'; j++)
{
			if (s[i] == c[j])
{
				s[i] = n[j];
}
}
}
	return (s);
}
