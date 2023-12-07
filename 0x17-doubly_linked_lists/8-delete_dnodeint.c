#include "lists.h"
/**
*delete_dnodeint_at_index - delete specific node
*
*@head: pointer to the list
*
*@index: index of node
*
*Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *idx_node, *current;
unsigned int idx = 0;
	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
{
		idx_node = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(idx_node);
		return (1);
}
	current = *head;
	while (current != NULL && idx < index)
{
		current = current->next;
		idx++;
}
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	current = NULL;
	return (1);
}
