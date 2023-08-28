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
	listint_t *c = *head, *pc = NULL;
	unsigned int i = 0;
	listint_t *node = NULL;

	while (c != NULL && i <= idx)
	{
		pc = c;
		c = c->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		if (pc != NULL)
			pc->next = node;
		node->next = c;
		if (*head == NULL)
			*head = node;
	}
	return (node);
}

