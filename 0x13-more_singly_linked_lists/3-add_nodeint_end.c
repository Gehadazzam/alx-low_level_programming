#include "lists.h"
/**
*add_nodeint_end - add node to the end of the ist
*
*@head: pointer to the list
*
*@n: intger to be added
*
*Return: the element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *cat;
listint_t *kitty = malloc(sizeof(listint_t));
	if (kitty == NULL)
		return (NULL);
	kitty->n = n;
	kitty->next = NULL;
	if (*head == NULL)
		*head = kitty;
	else
{
		cat = *head;
		while (cat->next != NULL)
			cat = cat->next;
		cat->next = kitty;
}
	return (kitty);
}
