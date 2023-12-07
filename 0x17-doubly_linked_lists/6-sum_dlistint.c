#include "lists.h"
/**
*sum_dlistint - add all the elements of the double linked list
*
*@head: pointer to the list
*
*Return: the sum or 0
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
	if (head == NULL)
		return (0);
	while (head)
{
		sum += head->n;
		head = head->next;
}
	return (sum);
}
