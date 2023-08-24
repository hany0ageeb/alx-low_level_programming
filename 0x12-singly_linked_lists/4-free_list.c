#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t list.
 * @head: head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *end;
	list_t *pre_end;

	while (head != NULL)
	{
		end = head;
		pre_end = NULL;
		while (end != NULL && end->next != NULL)
		{
			pre_end = end;
			end = end->next;
		}
		if (end != NULL)
		{
			if (end == head)
				head = NULL;
			free(end->str);
			free(end);
			if (pre_end != NULL)
				pre_end->next = NULL;
		}
	}
}

