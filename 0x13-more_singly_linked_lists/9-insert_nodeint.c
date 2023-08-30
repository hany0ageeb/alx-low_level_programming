#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: head node
 * @idx: a function that inserts a new node at a given position.
 * @n: the node data value
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *end = *head, *pre_end = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (end != NULL && i < idx)
	{
		pre_end = end;
		end = end->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = end;
		if (pre_end != NULL)
			pre_end->next = node;
		if (*head == NULL)
			*head = node;
	}
	return (node);
}

