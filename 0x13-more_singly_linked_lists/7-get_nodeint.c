#include "lists.h"
/**
*get_nodeint_at_index - return specific element
*
*@head: pointer to the list
*
*@index: the index of the element
*
*Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
	while (head != NULL)
{
		if (count == index)
			return (head);
		count++;
		head = head->next;
}
			return (NULL);
}
