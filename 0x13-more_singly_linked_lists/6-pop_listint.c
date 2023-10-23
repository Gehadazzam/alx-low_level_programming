#include "lists.h"
/**
*pop_listint - delete the head of the list
*
*@head: pointer to the list
*
*Return: n or 0
*/
int pop_listint(listint_t **head)
{
listint_t *cat;
int k;
	if (*head == NULL)
		return (0);
	cat = *head;
	k = cat->n;
	*head = (*head)->next;
	free(cat);
	return (k);
}
