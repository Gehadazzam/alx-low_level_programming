#include "lists.h"
/**
*insert_nodeint_at_index - insert an element to specific index
*
*@head: the list
*@idx: index where we will insert the element
*@n: integer to be added
*
*Return: pointer or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *cat = *head;
unsigned int i;
listint_t *kitty;
	if (head == NULL)
		return (NULL);
kitty = malloc(sizeof(listint_t));
	if (kitty == NULL)
		return (NULL);
kitty->n = n;
kitty->next = NULL;
	if (idx == 0)
{
		kitty->next = *head;
		*head = kitty;
		return (kitty);
}
	for (i = 0; i < idx - 1; i++)
{
		if (cat == NULL)
{
			free(kitty);
			return (NULL);
}
		cat = cat->next;
}
		if (cat == NULL)
{
			free(kitty);
			return (NULL);
}
	kitty->next = cat->next;
	cat->next = kitty;
	return (kitty);
}
