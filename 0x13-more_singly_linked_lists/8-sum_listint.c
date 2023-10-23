#include "lists.h"
/**
*sum_listint - function which sum the elemnts of the list
*
*@head: pointer to the list
*
*Return: the sum
*/
int sum_listint(listint_t *head)
{
int count = 0;
	if (head == NULL)
		return (0);
	while (head)
{
	count += head->n;
	head = head->next;
}
	return (count);
}
