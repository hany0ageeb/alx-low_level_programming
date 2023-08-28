#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *c;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		c = h->next;
		count++;
		while (c != NULL)
		{
			printf("%d\n", c->n);
			count++;
			c = c->next;
		}
	}
	return (count);
}

