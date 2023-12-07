#include "lists.h"
/**
*dlistint_len - length the len of double linked list
*
*@h: pointer to the list
*
*Return: the length
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t length = 0;
	while (h != NULL)
{
		h = h->next;
		length++;
}
	return (length);
}
