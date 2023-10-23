#include "lists.h"
/**
*print_listint - function which print all the elements in a list
*
*@h: pointer to the list
*
*Return: the count of the elements
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
	while (h)
{
		printf("%d\n", h->n);
		count++;
		h = h->next;
}
	return (count);
}
