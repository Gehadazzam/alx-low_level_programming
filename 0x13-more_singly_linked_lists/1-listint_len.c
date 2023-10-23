#include "lists.h"
/**
*listint_len - function returns the len of the elements
*
*@h: the pointer for the list
*
*Return: the count of the elements
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
	while (h)
{
		h = h->next;
		count++;
}
	return (count);
}
