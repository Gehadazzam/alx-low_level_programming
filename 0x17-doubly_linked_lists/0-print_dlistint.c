#include "lists.h"
/**
*print_dlistint - print all elements in doouble linked list
*
*@h: pointer to the list
*
*Return: the number of nodes we will print
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
	while (h != NULL)
{
	printf("%d\n", h->n);
		h = h->next;
		count++;
}
	return (count);
}
