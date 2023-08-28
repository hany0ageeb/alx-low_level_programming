#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: head node
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *c;

	if (h != NULL)
	{
		count++;
		c = h->next;
		while (c != NULL)
		{
			count++;
			c = c->next;
		}
	}
	return (count);
}

