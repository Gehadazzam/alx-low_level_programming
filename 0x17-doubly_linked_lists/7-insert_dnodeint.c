#include "lists.h"
/**
*insert_dnodeint_at_index - insert specific node in specific idx
*
*@h: pointer to the list
*@idx: where we will add the integer
*@n: integer to be added
*
*Return: pointer or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int index = 0;
dlistint_t *ptr, *idx_node = malloc(sizeof(dlistint_t));
	if (idx_node == NULL)
		return (NULL);
	idx_node->n = n;
	if (idx == 0)
{
		idx_node->prev = NULL;
		idx_node->next = *h;
		if (*h != NULL)
			(*h)->prev = idx_node;
		*h = idx_node;
		return (idx_node);
}
	ptr = *h;
	while (ptr != NULL && index < idx - 1)
{
		ptr = ptr->next;
		index++;
}
	if (ptr == NULL)
{
		free(idx_node);
		return (NULL);
}
	idx_node->prev = ptr;
	idx_node->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = idx_node;
	ptr->next = idx_node;
	return (idx_node);
}
