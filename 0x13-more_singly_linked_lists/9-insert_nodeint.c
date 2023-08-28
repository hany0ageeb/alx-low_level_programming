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
	listint_t *c = *head, *node = NULL;
	listint_t *pc = NULL;

	while (c != NULL && idx > 0)
	{
		pc = c;
		c = c->next;
		idx--;
	}
	if (idx == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node != NULL)
		{
			node->n = n;

		}
		if (pc != NULL)
		{
			pc->next = node;
			node->next = c;
		}
	}
	return (node);
}

