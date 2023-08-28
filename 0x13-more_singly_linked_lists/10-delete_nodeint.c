#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: head node
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head, *pc = NULL;

	while (index > 0 && c != NULL)
	{
		pc = c;
		c = c->next;
		index--;
	}
	if (index > 0)
		return (-1);
	if (c == NULL)
		return (-1);
	if (c == *head && c->next != NULL)
		*head = c->next;
	else if (c == *head)
		*head = NULL;
	if (pc != NULL)
		pc->next = c->next;
	free(c);
	c = NULL;
	return (1);
}

