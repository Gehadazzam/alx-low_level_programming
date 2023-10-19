#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_node - add a new node to the head
*
*@head: first member
*
*@str: seconed member
*
*Return: the node
*/
list_t *add_node(list_t **head, const char *str)
{
int count = 0;
list_t *cat = malloc(sizeof(list_t));
	if (cat == NULL)
		return (NULL);
	while (str[count])
		count++;
	cat->len = count;
	cat->str = strdup(str);
	cat->next = *head;
	*head = cat;
	return (cat);
}
