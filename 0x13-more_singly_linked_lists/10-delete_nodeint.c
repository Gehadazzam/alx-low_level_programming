#include "lists.h"
/**
*delete_nodeint_at_index - delete specific node
*
*@head: pointer to the list
*
*@index: the index of the node
*
*Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int num = 0;
listint_t *cat = *head;
listint_t *kitty = NULL;
	if (head == NULL)
		return (-1);
	while (cat)
{
		if (num == index)
{
			if (kitty)
				kitty->next = cat->next;
			else
				*head = cat->next;
			free(cat);
			return (1);
}
		kitty = cat;
		cat = cat->next;
		num++;
}
	return (-1);
}
