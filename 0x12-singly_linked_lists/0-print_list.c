#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_list - print all elements in a list
*
*@h: pointer to the struct
*
*Return: the count of the node
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
	while (h != NULL)
{
		if (h->str != NULL)
			printf("%d %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
}
	return (count);
}
