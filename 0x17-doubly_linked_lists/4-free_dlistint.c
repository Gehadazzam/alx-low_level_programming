#include "lists.h"
/**
*free_dlistint - free double linked list
*
*@head: pointer to the list
*
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head, *new_node;
	while (current != NULL)
{
		new_node = current->next;
		free(current);
		current = new_node;
}
}
