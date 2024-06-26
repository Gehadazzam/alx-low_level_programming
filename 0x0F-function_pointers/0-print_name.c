#include "function_pointers.h"
#include <stdlib.h>
/**
*print_name - contain pinter to function can print a name
*
*@name: the name to print
*
*@f: pointer to the function
*
*Return: (void)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
