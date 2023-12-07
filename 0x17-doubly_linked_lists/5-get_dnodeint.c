#include "lists.h"
/**
*get_dnodeint_at_index - get specific node from list
*
*@head: pointer to the list
*
*@index: the index of the node
*
*Return: the node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int idx = 0;
	while (head != NULL)
{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
}
	return (NULL);
}
