#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 * @head: head node
 * @n: number to add
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *c;

	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
		{
			*head = node;
			return (node);
		}
		c = *head;
		while (c->next != NULL)
		{
			c = c->next;
		}
		c->next = node;
	}
	return (node);
}

