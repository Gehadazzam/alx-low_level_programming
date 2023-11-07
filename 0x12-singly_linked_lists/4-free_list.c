#include "lists.h"
#include <stdlib.h>
/**
*free_list - free the list after finsh the work
*
*@head: member to be freed
*
*Return: void
*/
void free_list(list_t *head)
{
list_t *cat = head;
	while (cat)
{
		head = head->next;
		free(cat->str);
		free(cat);
		cat = head;
}
}
