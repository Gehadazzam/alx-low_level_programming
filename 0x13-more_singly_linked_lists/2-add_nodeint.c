#include "lists.h"
/**
*add_nodeint - function which add elements at the beggining f the list
*
*@head: pointer to the beginning of the list
*
*@n: integer we will add to the list
*
*Return: pointer to the node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *kitty = malloc(sizeof(listint_t));
	if (kitty == NULL)
		return (NULL);
	kitty->n = n;
	kitty->next = *head;
	*head = kitty;
	return (kitty);
}
