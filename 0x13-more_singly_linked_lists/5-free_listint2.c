#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *end, *pre_end;

	while (*head != NULL)
	{
		pre_end = NULL;
		end = *head;
		while (end->next != NULL)
		{
			pre_end = end;
			end = end->next;
		}
		if (*head == end)
			*head = NULL;
		free(end);
		if (pre_end != NULL)
			pre_end->next = NULL;
	}
}

