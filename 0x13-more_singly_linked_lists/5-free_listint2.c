#include "lists.h"
/**
*free_listint2 - function to free a memory allocated for a list
*
*@head: pointer to the list
*
*Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *cat;
	if (head == NULL)
		return;
	while (*head)
{
		cat = *head;
		*head = (*head)->next;
		free(cat);
}
	*head = NULL;
}
