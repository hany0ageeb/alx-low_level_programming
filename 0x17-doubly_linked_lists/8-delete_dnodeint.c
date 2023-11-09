#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head node
 * @index: node index
 * Return: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;

	while (index > 0 && h != NULL)
	{
		index--;
		h = h->next;
	}
	if (h == NULL)
		return (-1);
	if (h->prev != NULL)
		h->prev->next = h->next;
	if (h->next != NULL)
		h->next->prev = h->prev;
	if (*head == h)
		*head = (*head)->next;
	free(h);
	return (1);
}
