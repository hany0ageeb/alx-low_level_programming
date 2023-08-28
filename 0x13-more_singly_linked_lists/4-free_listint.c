#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a listint_t list.
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *end, *pre_end;

	while (head != NULL)
	{
		pre_end = NULL;
		end = head;
		while (end != NULL && end->next != NULL)
		{
			pre_end = end;
			end = end->next;
		}
		if (head == end)
			head = NULL;
		free(end);
		end = NULL;
		if (pre_end != NULL)
			pre_end->next = NULL;
	}
}

