#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Uses the function "printf" to print the size of data
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of Char Data Types in C = %zu bytes \n", sizeof(char));
	printf("Size of Int Data Types in C = %zu bytes \n", sizeof(int));
	printf("Size of Long Int Data Types in C = %zu bytes \n", sizeof(long int));
	printf("Size of Long Long Int Data Types in C = %zu bytes \n", sizeof(long long int));
	printf("Size of Float Data Types in C = %zu bytes \n", sizeof(float));
	return (0);
}
