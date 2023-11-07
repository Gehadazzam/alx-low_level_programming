#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_node_end - add element to the end of the list
*
*@head: first member
*
*@str: seconed member
*
*Return: the node
*/
list_t *add_node_end(list_t **head, const char *str)
{
int length = 0;
list_t *cat;
list_t *kitty = malloc(sizeof(list_t));
	if (kitty == NULL)
		return (NULL);
	while (str[length])
		length++;
	kitty->len = length;
	kitty->str = strdup(str);
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
