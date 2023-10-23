#include "lists.h"
/**
*free_listint - function that frees the list
*
*@head: pointer to the list
*
*Return: void
*/
void free_listint(listint_t *head)
{
listint_t *cat = head;
	while (cat)
{
		head = head->next;
		free(cat);
		cat = head;
}
}
