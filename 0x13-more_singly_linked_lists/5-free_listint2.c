#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *end, *pre_end;

	while (*head != NULL && (*head)->next != NULL)
	{
		pre_end = *head;
		end = (*head)->next;
		while (end != NULL && end->next != NULL)
		{
			pre_end = end;
			end = end->next;
		}
		free(end);
		if (pr_end != NULL)
			pr_end->next = NULL;
	}
	free(*head);
	*head = NULL;
}

